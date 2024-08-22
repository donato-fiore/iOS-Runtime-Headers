// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONTABLEVIEWHEADERFOOTERVIEW_H
#define SBHICONTABLEVIEWHEADERFOOTERVIEW_H

@class UITableViewHeaderFooterView, NSString;



@interface SBHIconTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSDirectionalEdgeInsets titleLayoutMargins; // ivar: _titleLayoutMargins


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)prepareForReuse;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif