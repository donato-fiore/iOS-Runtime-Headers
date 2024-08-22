// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UVFENCEHANDLE_H
#define UVFENCEHANDLE_H

@class NSString, BKSAnimationFenceHandle;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface UVFenceHandle : NSObject <BSXPCSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fenceName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BKSAnimationFenceHandle *underlying; // ivar: _underlying


+(BOOL)supportsBSXPCSecureCoding;
+(id)createForAllScenes;
+(id)createForScene:(id)arg0 ;
-(id)copy;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithUnderlying:(id)arg0 ;
-(void)applyToAllScenes;
-(void)applyToScene:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif