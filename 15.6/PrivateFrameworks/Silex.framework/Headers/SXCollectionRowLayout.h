// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXCOLLECTIONROWLAYOUT_H
#define SXCOLLECTIONROWLAYOUT_H


#import <Foundation/Foundation.h>


@interface SXCollectionRowLayout : NSObject

@property (nonatomic) CGFloat componentWidth; // ivar: _componentWidth
@property (nonatomic) NSUInteger componentsPerRow; // ivar: _componentsPerRow
@property (nonatomic) NSUInteger intendedComponentsPerRow; // ivar: _intendedComponentsPerRow
@property (nonatomic) CGFloat leftMargin; // ivar: _leftMargin
@property (nonatomic) CGFloat rightMargin; // ivar: _rightMargin
@property (nonatomic) CGFloat spaceBetweenComponents; // ivar: _spaceBetweenComponents


-(id)description;


@end


#endif