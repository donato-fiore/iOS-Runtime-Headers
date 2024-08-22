// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILSECTIONCONTROLLER_H
#define NTKCFACEDETAILSECTIONCONTROLLER_H

@class NSMutableArray, UITableView, UIViewController<NTKCTableViewProviding>, NSString;

#import <Foundation/Foundation.h>

#import "NTKCDetailTableViewCell.h"
#import "NTKFace.h"
#import "NTKCFaceDetailSectionHeaderView.h"

@interface NTKCFaceDetailSectionController : NSObject

@property (retain, nonatomic) NTKCDetailTableViewCell *cell; // ivar: _cell
@property (weak, nonatomic) NTKFace *face; // ivar: _face
@property (nonatomic) BOOL hasSpacerRow; // ivar: _hasSpacerRow
@property (retain, nonatomic) NTKCFaceDetailSectionHeaderView *headerView; // ivar: _headerView
@property (nonatomic) BOOL inGallery; // ivar: _inGallery
@property (readonly, nonatomic) NSInteger numberOfRows;
@property (retain, nonatomic) NSMutableArray *rows; // ivar: _rows
@property (nonatomic) NSInteger section; // ivar: _section
@property (readonly, weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UIViewController<NTKCTableViewProviding> *tableViewController; // ivar: _tableViewController
@property (readonly, nonatomic) NSString *titleForHeader; // ivar: _titleForHeader


+(void)registerForTableView:(id)arg0 ;
-(BOOL)_canSelectRow:(NSInteger)arg0 ;
-(BOOL)canSelectRow:(NSInteger)arg0 ;
-(CGFloat)_heightForSpacerRow;
-(CGFloat)heightForHeaderView;
-(CGFloat)heightForRow:(NSInteger)arg0 ;
-(id)_groupName;
-(id)_newSectionHeader;
-(id)_spacerRow;
-(id)cellForRow:(NSInteger)arg0 ;
-(id)initWithTableViewController:(id)arg0 face:(id)arg1 inGallery:(BOOL)arg2 ;
-(void)_commonInit;
-(void)didSelectRow:(NSInteger)arg0 ;


@end


#endif