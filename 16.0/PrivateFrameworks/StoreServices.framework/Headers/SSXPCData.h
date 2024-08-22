// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSXPCDATA_H
#define SSXPCDATA_H

@class NSData;
@protocol OS_xpc_object;



@interface SSXPCData : NSData

@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcData; // ivar: _xpcData


-(*void)bytes;
-(NSUInteger)length;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithXPCData:(id)arg0 ;
-(void)dealloc;


@end


#endif