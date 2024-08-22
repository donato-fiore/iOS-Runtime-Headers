// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETCONTENTCOMPOSITEFILTER_H
#define OKWIDGETCONTENTCOMPOSITEFILTER_H

@class NSArray, NSString;
@protocol JSOKWidgetContentCompositeFilter;


#import "OKWidgetBasicFilter.h"

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter>



@property (retain, nonatomic) NSArray *inputBackgroundFilters; // ivar: _inputBackgroundFilters
@property (retain, nonatomic) NSString *inputCompositionFilterName; // ivar: _inputCompositionFilterName
@property (retain, nonatomic) NSArray *inputFilters; // ivar: _inputFilters


+(id)filterWithInputFilters:(id)arg0 inputBackgroundFilters:(id)arg1 inputCompositionFilterName:(id)arg2 ;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setSettingInputBackgroundFilters:(id)arg0 ;
-(void)setSettingInputCompositionFilterName:(id)arg0 ;
-(void)setSettingInputFilters:(id)arg0 ;


@end


#endif