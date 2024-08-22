// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKPEERPICKERTABLEVIEWCELL_H
#define GKPEERPICKERTABLEVIEWCELL_H

@class UITableViewCell;



@interface GKPeerPickerTableViewCell : UITableViewCell

@property (nonatomic) BOOL topSeparator; // ivar: _topSeparator


+(CGFloat)separatorHeight;
+(void)initialize;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif