// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBDODGINGITEM_H
#define SBDODGINGITEM_H

@class NSArray, NSString, UIView;
@protocol NSCopying, UICoordinateSpace, SBDodgingItemDelegate;

#import <Foundation/Foundation.h>

#import "SBDodgingResolverViewController.h"
#import "SBDodgingItemPreference.h"

@interface SBDodgingItem : NSObject <NSCopying>

 {
    SBDodgingResolverViewController *_dodgingResolverViewController;
}


@property (nonatomic) CGPoint center; // ivar: _center
@property (retain, nonatomic) NSObject<UICoordinateSpace> *containerCoordinateSpace; // ivar: _containerCoordinateSpace
@property (nonatomic) CGSize containerSize; // ivar: _containerSize
@property (readonly, weak, nonatomic) NSObject<SBDodgingItemDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *otherDodgingIdentifiers; // ivar: _otherDodgingIdentifiers
@property (retain, nonatomic) SBDodgingItemPreference *preference; // ivar: _preference
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) UIView *view; // ivar: _view


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithUniqueIdentifier:(id)arg0 view:(id)arg1 delegate:(id)arg2 dodgingResolverViewController:(id)arg3 ;
-(id)invalidate;
-(void)setNeedsUpdateAnimated:(BOOL)arg0 ;


@end


#endif