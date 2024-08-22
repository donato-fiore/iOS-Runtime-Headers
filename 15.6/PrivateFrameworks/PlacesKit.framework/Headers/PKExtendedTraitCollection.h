// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKEXTENDEDTRAITCOLLECTION_H
#define PKEXTENDEDTRAITCOLLECTION_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface PKExtendedTraitCollection : NSObject

@property (nonatomic) CGFloat displayScale; // ivar: _displayScale
@property (nonatomic) NSInteger layoutSizeClass; // ivar: _layoutSizeClass
@property (nonatomic) NSInteger layoutSizeSubclass; // ivar: _layoutSizeSubclass
@property (retain, nonatomic) UITraitCollection *traitCollectionForMapKit; // ivar: _traitCollectionForMapKit
@property (nonatomic) NSInteger userInterfaceIdiom; // ivar: _userInterfaceIdiom
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


-(id)description;


@end


#endif