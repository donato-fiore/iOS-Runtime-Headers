// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFAMILYMEMBERTABLEVIEWCELL_H
#define PKFAMILYMEMBERTABLEVIEWCELL_H

@class UITableViewCell;
@protocol PKFamilyMemberRowModel;



@interface PKFamilyMemberTableViewCell : UITableViewCell

@property (retain, nonatomic) NSObject<PKFamilyMemberRowModel> *rowModel; // ivar: _rowModel


-(void)prepareForReuse;


@end


#endif