// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTOREINDEX_H
#define ISSTOREINDEX_H

@class NSData, NSURL;

#import <Foundation/Foundation.h>


@interface ISStoreIndex : NSObject {
    NSData *_data;
    os_unfair_lock_s _dataLock;
    NSData *_entryData;
}


@property (readonly) NSData *data;
@property (readonly) *os_unfair_lock_s dataLock;
@property (readonly) NSURL *indexFileURL; // ivar: _indexFileURL


-(BOOL)validate;
-(id)_internalData;
-(id)description;
-(id)initWithStoreFileURL:(id)arg0 ;
-(void)_internalSetData:(id)arg0 ;
-(void)enumerateValuesForUUID:(unsigned char)arg0 bock:(id)arg1 ;
-(void)enumerateValuesWithBock:(id)arg0 ;
-(void)invalidate;


@end


#endif