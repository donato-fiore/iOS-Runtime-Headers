// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIBARBACKBUTTONITEMAPPEARANCESTORAGE_H
#define _UIBARBACKBUTTONITEMAPPEARANCESTORAGE_H

@class NSMutableDictionary, NSValue;

#import <Foundation/Foundation.h>


@interface _UIBarBackButtonItemAppearanceStorage : NSObject {
    NSMutableDictionary *backgroundImages;
    NSMutableDictionary *miniBackgroundImages;
    NSMutableDictionary *backgroundVerticalAdjustmentsForBarMetrics;
}


@property (retain, nonatomic) NSValue *miniTitlePositionOffset; // ivar: miniTitlePositionOffset
@property (retain, nonatomic) NSValue *titlePositionOffset; // ivar: titlePositionOffset


-(CGFloat)backgroundVerticalAdjustmentForBarMetrics:(NSInteger)arg0 ;
-(id)anyBackgroundImage;
-(id)backgroundImageForState:(NSUInteger)arg0 isMini:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg0 forState:(NSUInteger)arg1 isMini:(BOOL)arg2 ;
-(void)setBackgroundVerticalAdjustment:(CGFloat)arg0 forBarMetrics:(NSInteger)arg1 ;


@end


#endif