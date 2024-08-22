// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLCOLLECTIONVIEWGRIDLAYOUTDETAILS_H
#define HUQUICKCONTROLCOLLECTIONVIEWGRIDLAYOUTDETAILS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "HUQuickControlCollectionViewGridLayoutRowInfo.h"
#import "HUQuickControlCollectionGridLayoutSettings.h"

@interface HUQuickControlCollectionViewGridLayoutDetails : NSObject

@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (copy, nonatomic) NSArray *rowLayouts; // ivar: _rowLayouts
@property (retain, nonatomic) HUQuickControlCollectionViewGridLayoutRowInfo *sectionHeaderLayout; // ivar: _sectionHeaderLayout
@property (nonatomic) NSUInteger sectionIndex; // ivar: _sectionIndex
@property (retain, nonatomic) HUQuickControlCollectionGridLayoutSettings *settings; // ivar: _settings


-(NSUInteger)numberOfColumnsInRow:(NSUInteger)arg0 ;
-(id)indexPathForRow:(NSUInteger)arg0 column:(NSUInteger)arg1 ;
-(id)indexPathForSectionHeader;


@end


#endif