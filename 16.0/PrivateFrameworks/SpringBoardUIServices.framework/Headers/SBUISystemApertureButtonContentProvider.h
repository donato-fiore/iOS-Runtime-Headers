// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUISYSTEMAPERTUREBUTTONCONTENTPROVIDER_H
#define SBUISYSTEMAPERTUREBUTTONCONTENTPROVIDER_H

@class UIButtonConfiguration, UIColor, NSString, UIView;
@protocol SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling;

#import <Foundation/Foundation.h>


@interface SBUISystemApertureButtonContentProvider : NSObject <SBUISystemApertureContentViewProviding, SBUISystemApertureContentColorStyling>



@property (copy, nonatomic) UIButtonConfiguration *buttonConfiguration;
@property (retain, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIView *providedView; // ivar: _providedView
@property (readonly) Class superclass;


-(id)initWithButtonConfiguration:(id)arg0 action:(id)arg1 ;
-(id)initWithDefaultSymbolActionConfigurationWithAction:(id)arg0 ;
-(id)initWithDefaultTextActionConfigurationWithAction:(id)arg0 ;


@end


#endif