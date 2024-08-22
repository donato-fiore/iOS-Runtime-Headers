// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBKDIFFABLETABLEVIEWCELL_H
#define FBKDIFFABLETABLEVIEWCELL_H

@class UITableViewCell, NSString;
@protocol FBKDiffableCell;



@interface FBKDiffableTableViewCell : UITableViewCell <FBKDiffableCell>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *itemIdentifier; // ivar: itemIdentifier
@property (readonly) Class superclass;


-(void)configureForTeam:(id)arg0 disclosesMoreTeams:(BOOL)arg1 ;


@end


#endif