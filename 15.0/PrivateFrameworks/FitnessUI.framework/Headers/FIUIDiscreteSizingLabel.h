// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIDISCRETESIZINGLABEL_H
#define FIUIDISCRETESIZINGLABEL_H

@class UILabel;
@protocol FIUIDiscreteSizingLabelDelegate;



@interface FIUIDiscreteSizingLabel : UILabel

@property (weak, nonatomic) NSObject<FIUIDiscreteSizingLabelDelegate> *delegate; // ivar: _delegate


-(void)setText:(id)arg0 ;


@end


#endif