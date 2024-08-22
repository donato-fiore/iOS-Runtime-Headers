// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPOINTERREGION_H
#define UIPOINTERREGION_H

@class NSString;
@protocol _UIContentEffectKey, NSCopying, NSObject;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface UIPointerRegion : NSObject <_UIContentEffectKey, NSCopying>



@property (readonly, nonatomic) BOOL _isLatching;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger generationID; // ivar: _generationID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NSObject> *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger latchingAxes; // ivar: _latchingAxes
@property (nonatomic) CGRect rect; // ivar: _rect
@property (weak, nonatomic) UIView *referenceView; // ivar: _referenceView
@property (readonly) Class superclass;


+(id)regionWithRect:(struct CGRect )arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif