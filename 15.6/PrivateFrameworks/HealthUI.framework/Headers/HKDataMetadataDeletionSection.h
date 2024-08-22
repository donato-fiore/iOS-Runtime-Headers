// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATAMETADATADELETIONSECTION_H
#define HKDATAMETADATADELETIONSECTION_H

@class UITableViewCell, NSString;
@protocol HKDataMetadataDeletionSectionDelegate;


#import "HKDataMetadataSection.h"

@interface HKDataMetadataDeletionSection : HKDataMetadataSection

@property (retain, nonatomic) UITableViewCell *cell; // ivar: _cell
@property (weak, nonatomic) NSObject<HKDataMetadataDeletionSectionDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *title; // ivar: _title


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)init;
-(id)initWithTitle:(id)arg0 ;
-(void)_updateCellForEnabledState;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif