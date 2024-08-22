// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTVISUALSTYLING_H
#define MTVISUALSTYLING_H

@class UIColor, CAFilter, MTCoreMaterialVisualStyling, NSString;

#import <Foundation/Foundation.h>


@interface MTVisualStyling : NSObject

@property (readonly, nonatomic) CGFloat alpha;
@property (readonly, copy, nonatomic) UIColor *color;
@property (readonly, nonatomic) CAFilter *composedFilter;
@property (readonly, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling; // ivar: _coreMaterialVisualStyling
@property (readonly, copy, nonatomic) NSString *visualStyleName;
@property (readonly, copy, nonatomic) NSString *visualStyleSetName;


-(id)_layerConfig;
-(id)initWithCoreMaterialVisualStyling:(id)arg0 ;
-(id)visualEffect;
-(void)applyToView:(id)arg0 withColorBlock:(id)arg1 ;


@end


#endif