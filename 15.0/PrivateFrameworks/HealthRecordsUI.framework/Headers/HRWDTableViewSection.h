// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRWDTABLEVIEWSECTION_H
#define HRWDTABLEVIEWSECTION_H

@protocol HRWDTableViewSectionDelegate;

#import <Foundation/Foundation.h>


@interface HRWDTableViewSection : NSObject

@property (readonly, nonatomic) NSObject<HRWDTableViewSectionDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger section; // ivar: _section


-(CGFloat)estimatedHeightForRow:(NSUInteger)arg0 ;
-(CGFloat)heightForFooter;
-(CGFloat)heightForHeader;
-(CGFloat)heightForRow:(NSUInteger)arg0 ;
-(NSUInteger)numberOfRows;
-(id)cellForRow:(NSUInteger)arg0 table:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 atSection:(NSUInteger)arg1 ;
-(id)titleForFooter;
-(id)titleForHeader;
-(id)viewForFooter:(id)arg0 ;
-(id)viewForHeader:(id)arg0 ;
-(id)willSelectRow:(id)arg0 ;
-(void)accessoryButtonTappedForRow:(NSUInteger)arg0 ;
-(void)activate;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)deactivate;
-(void)didSelectRow:(NSUInteger)arg0 representedByCell:(id)arg1 withCompletion:(id)arg2 ;
-(void)reloadAnimated:(BOOL)arg0 ;
-(void)setUpWithTableViewController:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif