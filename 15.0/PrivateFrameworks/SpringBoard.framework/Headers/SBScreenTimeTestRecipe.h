// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCREENTIMETESTRECIPE_H
#define SBSCREENTIMETESTRECIPE_H

@class NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBScreenTimeTestRecipe : NSObject <SBTestRecipe>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_setApplicationBundleIdentifiers:(id)arg0 blockedForScreenTimeExpiration:(BOOL)arg1 ;
+(void)load;
-(id)_defaultIdentifiers;
-(id)title;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif