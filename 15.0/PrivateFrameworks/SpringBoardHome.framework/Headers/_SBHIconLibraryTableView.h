// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBHICONLIBRARYTABLEVIEW_H
#define _SBHICONLIBRARYTABLEVIEW_H

@class UITableView, SBFFeatherBlurView;



@interface _SBHIconLibraryTableView : UITableView

@property (retain, nonatomic) SBFFeatherBlurView *headerBlur; // ivar: _headerBlur


-(id)initWithFrame:(struct CGRect )arg0 style:(NSInteger)arg1 ;
-(void)layoutSubviews;


@end


#endif