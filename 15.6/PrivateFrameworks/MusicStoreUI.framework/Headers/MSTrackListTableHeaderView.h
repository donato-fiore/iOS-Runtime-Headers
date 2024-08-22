// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSTRACKLISTTABLEHEADERVIEW_H
#define MSTRACKLISTTABLEHEADERVIEW_H

@class UIView, NSString;



@interface MSTrackListTableHeaderView : UIView {
    CGSize _titleSize;
}


@property (retain, nonatomic) NSString *title; // ivar: _title


-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)sizeToFit;


@end


#endif