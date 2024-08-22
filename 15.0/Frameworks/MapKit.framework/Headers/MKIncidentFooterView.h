// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKINCIDENTFOOTERVIEW_H
#define MKINCIDENTFOOTERVIEW_H

@class UITableViewHeaderFooterView, UIColor;


#import "MKViewWithHairline.h"

@interface MKIncidentFooterView : UITableViewHeaderFooterView {
    MKViewWithHairline *_hairlineView;
}


@property (copy, nonatomic) UIColor *separatorColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_commonInit;


@end


#endif