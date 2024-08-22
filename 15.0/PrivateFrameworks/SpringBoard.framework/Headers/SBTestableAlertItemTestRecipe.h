// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBTESTABLEALERTITEMTESTRECIPE_H
#define SBTESTABLEALERTITEMTESTRECIPE_H

@class SBAlertItem, NSString, NSArray;
@protocol SBTestRecipe;

#import <Foundation/Foundation.h>


@interface SBTestableAlertItemTestRecipe : NSObject <SBTestRecipe>

 {
    SBAlertItem *_item;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *recipesToTest; // ivar: _recipesToTest
@property (readonly) Class superclass;


+(id)nameForCase:(NSInteger)arg0 ;
+(id)testCases;
+(id)testCasesGrouped;
+(void)load;
-(id)_anyAppIcon;
-(id)_anySUDescriptor;
-(id)_anyUserInstalledAppIcon;
-(id)_mapsApp;
-(id)_nextAlertItemToTest;
-(id)alertForIndex:(NSInteger)arg0 ;
-(id)dataPlanAlertItemForCase:(NSInteger)arg0 ;
-(id)title;
-(void)_dismissCurrentItem;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;


@end


#endif