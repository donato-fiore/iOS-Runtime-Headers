// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSDATAWRAPPER_H
#define CSDATAWRAPPER_H

@class NSData;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSDataWrapper : NSObject

@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) *void dataPtr; // ivar: _dataPtr
@property (nonatomic) NSUInteger dataSize; // ivar: _dataSize
@property (readonly, nonatomic) NSUInteger mapSize; // ivar: _mapSize
@property (readonly, nonatomic) BOOL mapped; // ivar: _mapped
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // ivar: _xpcData


-(id)initWithData:(id)arg0 ;
-(id)initWithXPCValue:(id)arg0 ;
-(id)initWithXPCValue:(id)arg0 allowWritableSharedMemory:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif