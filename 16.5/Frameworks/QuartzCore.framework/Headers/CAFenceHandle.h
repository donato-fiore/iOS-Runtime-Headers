// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAFENCEHANDLE_H
#define CAFENCEHANDLE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CAFenceHandle : NSObject <NSCopying, NSSecureCoding>

 {
    NSUInteger _handle_name;
    NSUInteger _fence_name;
    unsigned int _port;
    Mutex _invalidation_mutex;
    SpinLock _lock;
    BOOL _invalidated;
}


@property (readonly, getter=isInvalidated) BOOL invalidated;
@property (readonly, getter=isUsable) BOOL usable;


+(BOOL)supportsSecureCoding;
+(id)handleForPort:(unsigned int)arg0 fenceId:(NSUInteger)arg1 ;
+(id)handleFromXPCRepresentation:(id)arg0 ;
+(id)newFenceFromDefaultServer;
+(id)newFenceFromServer:(unsigned int)arg0 ;
-(NSUInteger)fenceId;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createXPCRepresentation;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)copyPort;
-(void)accessMachPort:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif