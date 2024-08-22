// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSTIMEZONETABLECELL_H
#define PSTIMEZONETABLECELL_H

@class UITableViewCell, ALCity;



@interface PSTimeZoneTableCell : UITableViewCell

@property (retain, nonatomic) ALCity *city; // ivar: _city


-(id)_contentString;
-(void)prepareForReuse;


@end


#endif