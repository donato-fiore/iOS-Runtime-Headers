// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCOREMATERIALVISUALSTYLING_H
#define MTCOREMATERIALVISUALSTYLING_H

@class NSString, CAFilter, NSDictionary;
@protocol MTTinting, MTVisualStyleSetProviding;

#import <Foundation/Foundation.h>


@interface MTCoreMaterialVisualStyling : NSObject <MTTinting>

 {
    id<MTVisualStyleSetProviding> *_visualStyleSet;
    NSString *_visualStyleName;
    CAFilter *_composedFilter;
    NSDictionary *_tintColorDescription;
    *CGColor _tintColor;
    CGFloat _tintAlpha;
    NSString *_tintColorName;
    NSInteger _tintColorUIStyle;
    NSString *_compositingFilter;
    NSString *_filterType;
    NSDictionary *_filterProperties;
}


@property (readonly, nonatomic, getter=_composedFilter) CAFilter *composedFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tintAlpha;
@property (readonly, nonatomic) *CGColor tintColor;
@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, nonatomic) NSInteger tintColorUIStyle;
@property (readonly, nonatomic) NSString *visualStyleName;
@property (readonly, nonatomic) NSString *visualStyleSetName;


-(?)_getCompositingFiltertintColor;
-(?)_getFilterType:(?)arg0 vibrantColor:(?)arg1 tintColorinputReversed;
-(id)_preProcessFilteringDescription:(id)arg0 ;
-(id)compositingFilter;
-(id)filterProperties;
-(id)filterType;
-(id)initWithVisualStyleSet:(id)arg0 styleName:(id)arg1 description:(id)arg2 andDescendantDescriptions:(id)arg3 ;
-(void)_applyToLayer:(id)arg0 withColorBlock:(id)arg1 ;
-(void)_processBlendingDescription:(id)arg0 ;
-(void)_processFilteringDescription:(id)arg0 ;
-(void)_processTintingDescription:(id)arg0 ;
-(void)dealloc;


@end


#endif