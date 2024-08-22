// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


@property (readonly) NSUInteger _name;
@property (readonly, getter=isInvalidated) BOOL invalidated;
@property (readonly, getter=isUsable) BOOL usable;


+(BOOL)supportsSecureCoding;
+(id)_newFenceFromServer:(unsigned int)arg0 isObservable:(BOOL)arg1 ;
+(id)_newFenceWithPort:(unsigned int)arg0 name:(NSUInteger)arg1 ;
+(id)handleForPort:(unsigned int)arg0 fenceId:(NSUInteger)arg1 ;
+(id)handleFromXPCRepresentation:(id)arg0 ;
+(id)newFenceFromDefaultServer;
+(id)newFenceFromServer:(unsigned int)arg0 ;
+(id)newObservableFenceFromServer:(unsigned int)arg0 ;
-(NSUInteger)fenceId;
-(id)_initWithPort:(unsigned int)arg0 name:(NSUInteger)arg1 ;
-(id)_initWithXPCRepresentation:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)createXPCRepresentation;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)_copyPort;
-(unsigned int)_copyUntrackedPort;
-(unsigned int)copyPort;
-(void)_accessMachPort:(id)arg0 ;
-(void)accessMachPort:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif