// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUILOCATIONSERVICESAUTHLEVELCELL_H
#define PUILOCATIONSERVICESAUTHLEVELCELL_H

@class PSTableCell, NSURL;


#import "PUILocationUsageMixin.h"

@interface PUILocationServicesAuthLevelCell : PSTableCell {
    NSURL *_bundleURL;
    BOOL _isWebApp;
}


@property (readonly, nonatomic) NSUInteger authLevel; // ivar: _authLevel
@property (readonly, nonatomic) PUILocationUsageMixin *location; // ivar: _location


-(BOOL)canReload;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif