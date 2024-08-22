// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONCOLLECTIONVIEWMODEL_H
#define HUNEWUSEREDUCATIONCOLLECTIONVIEWMODEL_H

@class UIColor;

#import <Foundation/Foundation.h>

#import "HUNewUserEducationFlowLayoutModel.h"

@interface HUNewUserEducationCollectionViewModel : NSObject

@property (readonly, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, nonatomic) CGFloat decelerationRate; // ivar: _decelerationRate
@property (readonly, nonatomic) HUNewUserEducationFlowLayoutModel *layoutModel; // ivar: _layoutModel
@property (readonly, nonatomic) NSInteger numberOfItemsInSection; // ivar: _numberOfItemsInSection
@property (readonly, nonatomic) NSInteger numberOfSections; // ivar: _numberOfSections
@property (readonly, nonatomic) BOOL showsHorizontalScrollIndicator; // ivar: _showsHorizontalScrollIndicator
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator; // ivar: _showsVerticalScrollIndicator


+(id)reuseIdentifier;
-(id)init;


@end


#endif