// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKELECTROCARDIOGRAMMOREHEALTHDATAPROVIDER_H
#define HKELECTROCARDIOGRAMMOREHEALTHDATAPROVIDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface HKElectrocardiogramMoreHealthDataProvider : NSObject

@property (readonly, nonatomic) NSInteger count;
@property (retain, nonatomic) NSMutableArray *dataSource; // ivar: _dataSource


-(id)_defaultCellWithBackgroundColor:(id)arg0 ;
-(id)_itemViewForRow:(NSInteger)arg0 ;
-(id)_sentinelCell;
-(id)cellForRow:(NSInteger)arg0 tableView:(id)arg1 ;
-(id)init;
-(id)unitTesting_itemsForIdentifiers:(id)arg0 ;
-(struct UIEdgeInsets )_offscreenInsets;
-(void)_configureLayoutForView:(id)arg0 inCell:(id)arg1 ;
-(void)addItem:(id)arg0 ;
-(void)removeItemWithIdentifier:(id)arg0 ;


@end


#endif