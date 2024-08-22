// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STROOTSTORAGE_H
#define STROOTSTORAGE_H

@class NSMutableData;


#import "STStorage.h"

@interface STRootStorage : STStorage {
    *_RootStorage m_pCRoot;
    NSMutableData *m_StorageData;
    *void m_pvBuf;
}




-(*void)resizeStorageBuffer:(NSUInteger)arg0 ;
-(id)getDocumentProperty:(int)arg0 withId:(int)arg1 PropType:(*int)arg2 ;
-(id)getDocumentProperty:(int)arg0 withId:(int)arg1 PropType:(*int)arg2 throwOnError:(BOOL)arg3 ;
-(id)getStringDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1 ;
-(id)initWithMutableData:(id)arg0 andMode:(int)arg1 ;
-(id)initWithName:(id)arg0 andMode:(int)arg1 ;
-(int)getLongDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1 ;
-(short)getShortDocumentPropertyWithId:(int)arg0 givenPropStream:(int)arg1 ;
-(void)dealloc;
-(void)setBlobDocumentPropertyWithId:(int)arg0 to:(*void)arg1 givenPropStream:(int)arg2 ;
-(void)setDefaultDocumentProperties;
-(void)setDocumentProperty:(int)arg0 withId:(int)arg1 AndType:(int)arg2 AndValue:(*void)arg3 ;
-(void)setLongDocumentPropertyWithId:(int)arg0 to:(int)arg1 givenPropStream:(int)arg2 ;
-(void)setShortDocumentPropertyWithId:(int)arg0 to:(short)arg1 givenPropStream:(int)arg2 ;
-(void)setStringDocumentPropertyWithId:(int)arg0 to:(id)arg1 givenPropStream:(int)arg2 ;


@end


#endif