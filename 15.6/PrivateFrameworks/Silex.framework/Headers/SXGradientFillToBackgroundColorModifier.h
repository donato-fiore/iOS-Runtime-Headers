// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXGRADIENTFILLTOBACKGROUNDCOLORMODIFIER_H
#define SXGRADIENTFILLTOBACKGROUNDCOLORMODIFIER_H

@class NSString;
@protocol SXDOMModifying;

#import <Foundation/Foundation.h>


@interface SXGradientFillToBackgroundColorModifier : NSObject <SXDOMModifying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)convertGradientFillToBackgroundColorForComponentStyle:(id)arg0 ;
-(void)modifyDOM:(id)arg0 context:(id)arg1 ;


@end


#endif