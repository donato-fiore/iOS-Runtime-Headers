// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPERWINDOWSCENESTYLETRANSITIONSTATE_H
#define SBWWALLPAPERWINDOWSCENESTYLETRANSITIONSTATE_H

@class NSString;
@protocol NSCopying, BSXPCCoding;

#import <Foundation/Foundation.h>


@interface SBWWallpaperWindowSceneStyleTransitionState : NSObject <NSCopying, BSXPCCoding>

 {
    ? _stateTable;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ? highestPriorityStyleTransitionState;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
// -(void)diffFromWallpaperWindowSceneStyleTransitionState:(id)arg0 updateHandler:(id)arg1 removeHandler:(unk)arg2  ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)removeWallpaperStyleTransitionStateForPriority:(NSInteger)arg0 ;
-(void)setWallpaperStyleTransitionState:(struct ? )arg0 forPriority:(NSInteger)arg1 ;


@end


#endif