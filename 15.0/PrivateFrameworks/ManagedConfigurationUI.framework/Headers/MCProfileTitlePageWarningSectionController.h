// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCPROFILETITLEPAGEWARNINGSECTIONCONTROLLER_H
#define MCPROFILETITLEPAGEWARNINGSECTIONCONTROLLER_H

@class NSString, UITableView, MCProfileWarning;
@protocol MCProfileTitlePageSectionController;

#import <Foundation/Foundation.h>


@interface MCProfileTitlePageWarningSectionController : NSObject <MCProfileTitlePageSectionController>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) MCProfileWarning *warning; // ivar: _warning


-(CGFloat)heightForHeader;
-(CGFloat)heightForRowAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRows;
-(id)cellForRowAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithWarning:(id)arg0 ;
-(id)titleForHeader;
-(void)registerCellClassWithTableView:(id)arg0 ;


@end


#endif