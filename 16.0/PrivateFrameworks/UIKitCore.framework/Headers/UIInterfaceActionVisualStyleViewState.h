// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINTERFACEACTIONVISUALSTYLEVIEWSTATE_H
#define UIINTERFACEACTIONVISUALSTYLEVIEWSTATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIScreen.h"
#import "UIColor.h"
#import "UITraitCollection.h"

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying>



@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (readonly, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)_stateEqualToVisualStyleViewState:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithScreen:(id)arg0 ;
-(id)copyWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithPropertiesFromTopLevelView:(id)arg0 ;
-(void)_collectStateFromScreen:(id)arg0 ;
-(void)_collectStateFromView:(id)arg0 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg0 ;


@end


#endif