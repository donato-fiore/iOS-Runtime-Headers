// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MKDATAHEADERMODEL_H
#define _MKDATAHEADERMODEL_H

@class UIView;

#import <Foundation/Foundation.h>

#import "_MKLineHeaderModel.h"
#import "MKTransitInfoLabelView.h"

@interface _MKDataHeaderModel : NSObject

@property (retain, nonatomic) _MKLineHeaderModel *firstLine; // ivar: _firstLine
@property (retain, nonatomic) _MKLineHeaderModel *forthLine; // ivar: _forthLine
@property (weak, nonatomic) UIView *ownerView; // ivar: _ownerView
@property (retain, nonatomic) _MKLineHeaderModel *secondLine; // ivar: _secondLine
@property (retain, nonatomic) _MKLineHeaderModel *secondaryNameLine; // ivar: _secondaryNameLine
@property (retain, nonatomic) _MKLineHeaderModel *thirdLine; // ivar: _thirdLine
@property (retain, nonatomic) MKTransitInfoLabelView *transitLabel; // ivar: _transitLabel


-(id)description;
-(id)init;


@end


#endif