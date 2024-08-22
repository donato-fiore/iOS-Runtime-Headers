// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOSURFACESHAREDEVENT_H
#define IOSURFACESHAREDEVENT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding>

 {
    *NSUInteger _signaledValue;
}


@property (readonly) unsigned int eventPort; // ivar: _eventPort
@property (readonly) NSUInteger globalTraceObjectID; // ivar: _globalTraceObjectID
@property NSUInteger signaledValue;


+(BOOL)supportsSecureCoding;
-(BOOL)waitUntilSignaledValue:(NSUInteger)arg0 timeoutMS:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMachPort:(unsigned int)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)notifyListener:(id)arg0 atValue:(NSUInteger)arg1 block:(id)arg2 ;


@end


#endif