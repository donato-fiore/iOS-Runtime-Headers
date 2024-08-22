// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTFILTERENTRY_H
#define _UIVISUALEFFECTFILTERENTRY_H

@class CAFilter, NSDictionary, NSString;
@protocol _UIVisualEffectDiffable;

#import <Foundation/Foundation.h>


@interface _UIVisualEffectFilterEntry : NSObject <_UIVisualEffectDiffable>

 {
    CAFilter *_filter;
}


@property (copy, nonatomic) NSDictionary *configurationValues; // ivar: _configurationValues
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAFilter *filter;
@property (readonly, copy, nonatomic) NSString *filterName; // ivar: _filterName
@property (copy, nonatomic) NSString *filterType; // ivar: _filterType
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat identityScaleHint; // ivar: _identityScaleHint
@property (copy, nonatomic) NSDictionary *identityValues; // ivar: _identityValues
@property (nonatomic) CGFloat requestedScaleHint; // ivar: _requestedScaleHint
@property (copy, nonatomic) NSDictionary *requestedValues; // ivar: _requestedValues
@property (readonly) Class superclass;
@property (nonatomic) BOOL useRelaxedDiffingRule; // ivar: _useRelaxedDiffingRule


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(CGFloat)scaleHintAsRequested:(BOOL)arg0 ;
-(id)copyForTransitionOut;
-(id)copyForTransitionToEffect:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFilterType:(id)arg0 configurationValues:(id)arg1 requestedValues:(id)arg2 identityValues:(id)arg3 ;
-(id)valueAsRequested:(BOOL)arg0 ;
-(void)convertToIdentity;
-(void)forceUniqueName;


@end


#endif