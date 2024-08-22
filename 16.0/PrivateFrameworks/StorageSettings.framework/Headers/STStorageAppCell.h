// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTORAGEAPPCELL_H
#define STSTORAGEAPPCELL_H



#import "STStorageTableCell.h"

@interface STStorageAppCell : STStorageTableCell



+(id)specifierForAppBundleURL:(id)arg0 ;
+(id)specifierForAppIdentifier:(id)arg0 ;
+(id)specifierForAppProxy:(id)arg0 ;
+(id)specifierForChildApp:(id)arg0 ;
+(id)specifierForStorageApp:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif