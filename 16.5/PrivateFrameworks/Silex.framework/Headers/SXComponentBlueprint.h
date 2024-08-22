// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTBLUEPRINT_H
#define SXCOMPONENTBLUEPRINT_H

@class NSDictionary;
@protocol NSSecureCoding, NSCopying, SXComponent, SXComponentLayout, SXComponentState;

#import <Foundation/Foundation.h>

#import "SXComponentSizer.h"
#import "SXLayoutBlueprint.h"

@interface SXComponentBlueprint : NSObject <NSSecureCoding, NSCopying>

 {
    BOOL _hasValidSize;
    BOOL _hasValidPosition;
    CGRect _frame;
}


@property (nonatomic) CGRect absoluteFrame; // ivar: _absoluteFrame
@property (nonatomic) CGRect backgroundViewFrame; // ivar: _backgroundViewFrame
@property (nonatomic) UIEdgeInsets borderInsets; // ivar: _borderInsets
@property (nonatomic) _NSRange columnRange; // ivar: _columnRange
@property (readonly, nonatomic) NSObject<SXComponent> *component; // ivar: _component
@property (readonly, nonatomic) NSObject<SXComponentLayout> *componentLayout; // ivar: _componentLayout
@property (readonly, nonatomic) SXComponentSizer *componentSizer; // ivar: _componentSizer
@property (retain, nonatomic) NSObject<SXComponentState> *componentState; // ivar: _componentState
@property (nonatomic) CGRect componentViewFrame; // ivar: _componentViewFrame
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) CGRect contentViewFrame; // ivar: _contentViewFrame
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) BOOL hasValidLayout;
@property (readonly, nonatomic) BOOL hasValidPosition;
@property (readonly, nonatomic) BOOL hasValidSize;
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSDictionary *infoFromLayouting; // ivar: _infoFromLayouting
@property (nonatomic) UIEdgeInsets layoutMargins; // ivar: _layoutMargins
@property (weak, nonatomic) SXLayoutBlueprint *parentLayoutBlueprint; // ivar: _parentLayoutBlueprint
@property (readonly, nonatomic) SXLayoutBlueprint *rootLayoutBlueprint;
@property (nonatomic) CGSize suggestedSizeAfterInvalidation; // ivar: _suggestedSizeAfterInvalidation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithComponent:(id)arg0 componentLayout:(id)arg1 componentSizer:(id)arg2 ;
-(void)invalidateLayout;
-(void)invalidatePosition;
-(void)invalidateSize;
-(void)storeInformationForRenderingPhase:(id)arg0 ;
-(void)updatePosition:(struct CGPoint )arg0 ;
-(void)updateSize:(struct CGSize )arg0 ;


@end


#endif