// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCPROFILETITLEPAGEMETADATASECTIONCONTROLLER_H
#define MCPROFILETITLEPAGEMETADATASECTIONCONTROLLER_H

@class NSString, MCProfile, UITableView;
@protocol MCProfileTitlePageSectionController;

#import <Foundation/Foundation.h>

#import "MCProfileTitlePageSettingsIconCell.h"
#import "MCProfileTitlePageOrganizationCell.h"
#import "MCProfileTitlePageSubtitleCell.h"
#import "MCProfileTitlePageTitleCell.h"

@interface MCProfileTitlePageMetaDataSectionController : NSObject <MCProfileTitlePageSectionController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCProfileTitlePageSettingsIconCell *iconCell; // ivar: _iconCell
@property (retain, nonatomic) MCProfileTitlePageOrganizationCell *orgCell; // ivar: _orgCell
@property (retain, nonatomic) MCProfile *profile; // ivar: _profile
@property (retain, nonatomic) MCProfileTitlePageSubtitleCell *subtitleCell; // ivar: _subtitleCell
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) MCProfileTitlePageTitleCell *titleCell; // ivar: _titleCell


-(CGFloat)heightForHeader;
-(CGFloat)heightForRowAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRows;
-(id)cellForRowAtIndex:(NSUInteger)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)titleForHeader;
-(void)registerCellClassWithTableView:(id)arg0 ;


@end


#endif