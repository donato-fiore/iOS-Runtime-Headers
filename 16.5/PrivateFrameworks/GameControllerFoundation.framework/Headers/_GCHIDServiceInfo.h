// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCHIDSERVICEINFO_H
#define _GCHIDSERVICEINFO_H

@class NSData, NSNumber;
@protocol NSCopying, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GCHIDServiceInfo : NSObject <NSCopying>

 {
    NSData *_inputData;
}


@property (readonly) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) NSNumber *registryID; // ivar: _registryID
@property (readonly) *__IOHIDServiceClient service; // ivar: _service


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHIDServiceInfo:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithService:(struct __IOHIDServiceClient *)arg0 queue:(id)arg1 ;
-(id)redactedDescription;
-(void)dealloc;


@end


#endif