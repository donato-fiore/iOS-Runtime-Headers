// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHDEFAULTICONLISTLAYOUTPROVIDER_H
#define SBHDEFAULTICONLISTLAYOUTPROVIDER_H

@class NSMutableDictionary, NSString;
@protocol SBIconListLayoutProvider, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHDefaultIconListLayoutProvider : NSObject <SBIconListLayoutProvider, BSDescriptionProviding>

 {
    NSMutableDictionary *_cachedListLayouts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger layoutOptions; // ivar: _layoutOptions
@property (readonly, nonatomic) NSUInteger screenType; // ivar: _screenType
@property (readonly) Class superclass;


+(NSUInteger)currentDeviceScreenType;
+(NSUInteger)defaultLayoutOptions;
+(NSUInteger)extendedFloatingDockCapacityIconCount;
+(id)frameworkFallbackInstance;
-(NSUInteger)layoutOptionsForIconLocation:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithLayoutOptions:(NSUInteger)arg0 ;
-(id)initWithScreenType:(NSUInteger)arg0 ;
-(id)initWithScreenType:(NSUInteger)arg0 layoutOptions:(NSUInteger)arg1 ;
-(id)layoutForIconLocation:(id)arg0 ;
-(id)makeLayoutForIconLocation:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(struct UIEdgeInsets )homeScreenSearchOverlayInsetsForScreenType:(NSUInteger)arg0 layoutOptions:(NSUInteger)arg1 forAppLibrary:(BOOL)arg2 ;
-(void)configureAppLibraryConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2 ;
-(void)configureFloatyFolderConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2 ;
-(void)configureFolderIconConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 numberOfRows:(NSUInteger)arg2 layoutOptions:(NSUInteger)arg3 ;
-(void)configureGridSizeClassSizes:(struct SBHIconGridSizeClassSizes *)arg0 forScreenType:(NSUInteger)arg1 numberOfColumns:(NSUInteger)arg2 iconLocation:(id)arg3 layoutOptions:(NSUInteger)arg4 ;
-(void)configureIconAccessoryConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2 ;
-(void)configureLabelConfigurations:(id)arg0 forScreenType:(NSUInteger)arg1 ;
-(void)configureRootFolderConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2 ;
-(void)configureSidebarConfiguration:(id)arg0 forScreenType:(NSUInteger)arg1 layoutOptions:(NSUInteger)arg2 getBottomSearchOffset:(*CGFloat)arg3 ;
-(void)configureSupportedIconGridSizeClasses:(*NSUInteger)arg0 forScreenType:(NSUInteger)arg1 iconLocation:(id)arg2 layoutOptions:(NSUInteger)arg3 ;


@end


#endif