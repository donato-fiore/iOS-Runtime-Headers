// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STPROPERTYSTORAGE_H
#define STPROPERTYSTORAGE_H


#import <Foundation/Foundation.h>


@interface STPropertyStorage : NSObject {
    *_SsrwPropertyStorage m_pPropertyStorage;
}




-(id)getDocumentPropertyWithId:(int)arg0 propType:(*int)arg1 ;
-(id)getDocumentPropertyWithName:(id)arg0 propType:(*int)arg1 ;
-(id)getStringDocumentPropertyWithId:(int)arg0 ;
-(id)initWithPropertyStorage:(struct _SsrwPropertyStorage *)arg0 ;
-(int)getLongDocumentPropertyWithId:(int)arg0 ;
-(short)getShortDocumentPropertyWithId:(int)arg0 ;
-(void)close;
-(void)setBlobDocumentPropertyWithName:(id)arg0 to:(id)arg1 ;
-(void)setDocumentPropertyWithId:(int)arg0 to:(id)arg1 ;
-(void)setLongDocumentPropertyWithId:(int)arg0 to:(int)arg1 ;
-(void)setShortDocumentPropertyWithId:(int)arg0 to:(short)arg1 ;
-(void)setStringDocumentPropertyWithId:(int)arg0 to:(id)arg1 ;


@end


#endif