// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBOMNIBUSALERTITEMTESTRECIPE_H
#define SBOMNIBUSALERTITEMTESTRECIPE_H

@class SBAlertItem, NSString;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBOmnibusAlertItemTestRecipe : NSObject <SBTestRecipe>

 {
    SBAlertItem *_item;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(id)_anyAppIcon;
-(id)_anySUDescriptor;
-(id)_anyUserInstalledAppIcon;
-(id)_mapsApp;
-(id)_nextAlertItemToTest;
-(id)title;
-(void)_dismissCurrentItem;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif