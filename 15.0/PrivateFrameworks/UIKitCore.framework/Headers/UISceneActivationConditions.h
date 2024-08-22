// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISCENEACTIVATIONCONDITIONS_H
#define UISCENEACTIVATIONCONDITIONS_H

@class NSPredicate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIScene.h"

@interface UISceneActivationConditions : NSObject <NSCopying, NSSecureCoding>

 {
    NSPredicate *_canActivatePredicate;
    NSPredicate *_prefersPredicate;
}


@property (weak, nonatomic, setter=_setUIScene:) UIScene *_UIScene; // ivar: _uiScene
@property (copy, nonatomic) NSPredicate *canActivateForTargetContentIdentifierPredicate;
@property (copy, nonatomic) NSPredicate *prefersToActivateForTargetContentIdentifierPredicate;


+(BOOL)supportsSecureCoding;
-(BOOL)_validateCompileTimeIssues:(*id)arg0 runTimeIssues:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_suitabilityForTargetContentIdentifier:(id)arg0 errorString:(*id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif