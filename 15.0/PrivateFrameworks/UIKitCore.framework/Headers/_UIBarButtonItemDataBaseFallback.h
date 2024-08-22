// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIBARBUTTONITEMDATABASEFALLBACK_H
#define _UIBARBUTTONITEMDATABASEFALLBACK_H

@class NSString;
@protocol _UIBarButtonItemDataFallback;

#import <Foundation/Foundation.h>


@interface _UIBarButtonItemDataBaseFallback : NSObject <_UIBarButtonItemDataFallback>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fallback;
-(id)backIndicatorTextStyleForSymbolConfiguration;
-(id)backgroundImageForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)colorForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)fontForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(id)textStyleForSymbolConfiguration;
-(struct UIOffset )backgroundImagePositionAdjustmentForState:(NSInteger)arg0 style:(NSInteger)arg1 ;
-(struct UIOffset )titlePositionAdjustmentForState:(NSInteger)arg0 style:(NSInteger)arg1 ;


@end


#endif