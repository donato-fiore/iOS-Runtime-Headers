// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVMEDIAQUERYEVALUATOR_H
#define TVMEDIAQUERYEVALUATOR_H

@class IKViewElement;
@protocol TVMediaQueryEvaluatorDelegate, UITraitEnvironment;

#import <Foundation/Foundation.h>

#import "_TVWindowSizeAdaptor.h"

@interface TVMediaQueryEvaluator : NSObject {
    ? _implFlags;
}


@property (weak, nonatomic) NSObject<TVMediaQueryEvaluatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) IKViewElement *templateElement; // ivar: _templateElement
@property (readonly, weak, nonatomic) NSObject<UITraitEnvironment> *traitEnvironment; // ivar: _traitEnvironment
@property (readonly, retain, nonatomic) _TVWindowSizeAdaptor *windowSizeAdaptor; // ivar: _windowSizeAdaptor


+(id)_mobileGestaltStringForKey:(struct __CFString *)arg0 ;
+(id)_productType;
+(id)evaluatorForTemplateElement:(id)arg0 inWindow:(id)arg1 ;
+(id)evaluatorForTemplateElement:(id)arg0 inWindow:(id)arg1 traitEnvironment:(id)arg2 ;
-(BOOL)_evaluateAllMediaFeatureType:(id)arg0 withValue:(id)arg1 ;
-(BOOL)_evaluateDeviceFeatureType:(id)arg0 withValue:(id)arg1 ;
-(BOOL)_evaluateTemplateFeatureType:(id)arg0 withValue:(id)arg1 ;
-(BOOL)evaluateMediaQuery:(id)arg0 ;
-(id)initWithTemplateElement:(id)arg0 ;
-(id)initWithTemplateElement:(id)arg0 inWindow:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg0 inWindow:(id)arg1 traitEnvironment:(id)arg2 ;


@end


#endif