// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TVSTACKSECTION_H
#define _TVSTACKSECTION_H


#import <Foundation/Foundation.h>


@interface _TVStackSection : NSObject

@property (nonatomic) TVRowMetrics compoundRowMetrics; // ivar: _compoundRowMetrics
@property (nonatomic) NSInteger firstItemRowIndex; // ivar: _firstItemRowIndex
@property (nonatomic) NSInteger firstRowIndex; // ivar: _firstRowIndex
@property (nonatomic) NSInteger rowCount; // ivar: _rowCount
@property (nonatomic) CGFloat sectionHeight; // ivar: _sectionHeight
@property (nonatomic) UIEdgeInsets sectionSpacing; // ivar: _sectionSpacing
@property (nonatomic) CGFloat showcaseSectionHeight; // ivar: _showcaseSectionHeight
@property (nonatomic) UIEdgeInsets showcaseSectionSpacing; // ivar: _showcaseSectionSpacing


-(id)debugDescription;


@end


#endif