// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKSANIMATIONFENCEHANDLE_H
#define BKSANIMATIONFENCEHANDLE_H

@class CAFenceHandle, NSString;
@protocol BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BKSAnimationFenceHandle : NSObject <BSXPCCoding, NSSecureCoding, NSCopying, BSInvalidatable>

 {
    CAFenceHandle *_caFence;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fenceName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUsable) BOOL usable;


+(BOOL)supportsSecureCoding;
+(id)newFenceHandleForCAFenceHandle:(id)arg0 ;
+(id)newFenceHandleForContext:(id)arg0 ;
-(id)CAFenceHandle;
-(id)_initWithCAFenceHandle:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(unsigned int)CAPort;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)invalidate;


@end


#endif