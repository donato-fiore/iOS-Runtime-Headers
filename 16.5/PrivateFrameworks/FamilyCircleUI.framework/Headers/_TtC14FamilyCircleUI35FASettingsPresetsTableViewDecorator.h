// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14FAMILYCIRCLEUI35FASETTINGSPRESETSTABLEVIEWDECORATOR_H
#define _TTC14FAMILYCIRCLEUI35FASETTINGSPRESETSTABLEVIEWDECORATOR_H



#import "FATableViewDecorator.h"

@interface _TtC14FamilyCircleUI35FASettingsPresetsTableViewDecorator : FATableViewDecorator {
    ? ruiTableView;
    ? parentViewController;
    ? $__lazy_storage_$_settingsPresetsVC;
}




-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithTableView:(id)arg0 ;
-(id)initWithTableView:(id)arg0 ruiTableView:(id)arg1 parentViewController:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;


@end


#endif