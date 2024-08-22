// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISSTOREMAPTABLE_H
#define ISSTOREMAPTABLE_H

@class NSData, NSURL;

#import <Foundation/Foundation.h>


@interface ISStoreMapTable : NSObject

@property (readonly) NSData *data; // ivar: _data
@property os_unfair_lock_s dataLock; // ivar: _dataLock
@property (readonly) NSUInteger initialCapacity; // ivar: _initialCapacity
@property (retain) NSURL *url; // ivar: _url


-(id)dataForUUID:(id)arg0 ;
-(id)initWithURL:(id)arg0 capacity:(NSUInteger)arg1 ;
-(void)_extend;
-(void)_extendData;
-(void)_extendWithMultiplyer:(float)arg0 ;
-(void)addData:(id)arg0 forUUID:(id)arg1 ;
-(void)compact;
-(void)enumerateWithBlock:(id)arg0 ;
-(void)enumerateWithUUID:(unsigned char)arg0 block:(id)arg1 ;
-(void)removeAll;
-(void)removeDataForUUID:(id)arg0 ;
-(void)removeDataForUUID:(id)arg0 passingTest:(id)arg1 ;
-(void)setBytes:(*void)arg0 size:(NSUInteger)arg1 forUUID:(unsigned char)arg2 ;


@end


#endif