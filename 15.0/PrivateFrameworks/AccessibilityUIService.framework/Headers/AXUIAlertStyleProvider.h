// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXUIALERTSTYLEPROVIDER_H
#define AXUIALERTSTYLEPROVIDER_H

@class NSBundle, NSString;
@protocol AXUIAlertStyleProvider;

#import <Foundation/Foundation.h>


@interface AXUIAlertStyleProvider : NSObject <AXUIAlertStyleProvider>



@property (retain, nonatomic) NSBundle *bundle; // ivar: _bundle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)styleProvider;
-(BOOL)alertShouldGrowInAxis:(NSInteger)arg0 forType:(NSUInteger)arg1 ;
-(CGFloat)alertBackgroundCornerRadiusForType:(NSUInteger)arg0 ;
-(CGFloat)alertFadeAnimationDurationForType:(NSUInteger)arg0 ;
-(CGFloat)alertSubtitleTextLineHeightOffsetForType:(NSUInteger)arg0 ;
-(CGFloat)alertSubtitleTextVerticalSpacingHeightWithTextForType:(NSUInteger)arg0 ;
-(CGFloat)alertTextLineHeightOffsetForType:(NSUInteger)arg0 ;
-(id)alertSubtitleTextColorForType:(NSUInteger)arg0 ;
-(id)alertSubtitleTextFontForType:(NSUInteger)arg0 ;
-(id)alertTextColorForType:(NSUInteger)arg0 ;
-(id)alertTextFontForType:(NSUInteger)arg0 ;
-(int)alertBackgroundStyleForType:(NSUInteger)arg0 ;
-(int)alertPositionForType:(NSUInteger)arg0 ;
-(struct CGSize )alertBackgroundSizeForType:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )alertContentEdgeInsetsForType:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )alertEdgeInsetsForType:(NSUInteger)arg0 ;
-(struct UIEdgeInsets )alertIconImageEdgeInsetsForType:(NSUInteger)arg0 ;


@end


#endif