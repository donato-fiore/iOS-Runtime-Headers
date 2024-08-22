// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKVIEWTABLEVIEWCELL_H
#define HKVIEWTABLEVIEWCELL_H

@class UITableViewCell, UIView;



@interface HKViewTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIView *hostedView; // ivar: _hostedView


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_pinViewToContent:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif