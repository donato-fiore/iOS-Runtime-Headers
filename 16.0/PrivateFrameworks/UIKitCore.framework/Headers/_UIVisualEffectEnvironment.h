// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTENVIRONMENT_H
#define _UIVISUALEFFECTENVIRONMENT_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIVisualEffectView.h"
#import "UITraitCollection.h"

@interface _UIVisualEffectEnvironment : NSObject <NSCopying>



@property (nonatomic) BOOL allowsBlurring; // ivar: _allowsBlurring
@property (nonatomic) BOOL allowsDithering; // ivar: _allowsDithering
@property (readonly, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (nonatomic) BOOL reducedTransperancy; // ivar: _reducedTransperancy
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic) BOOL useSimpleVibrancy; // ivar: _useSimpleVibrancy


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithHost:(id)arg0 ;


@end


#endif