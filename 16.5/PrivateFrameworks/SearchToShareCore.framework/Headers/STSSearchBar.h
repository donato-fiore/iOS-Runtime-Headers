// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSSEARCHBAR_H
#define STSSEARCHBAR_H

@class UISearchBar;
@protocol STSSearchBarDelegate;



@interface STSSearchBar : UISearchBar {
    BOOL _clickBeganInSearchBar;
}


@property (weak, nonatomic) NSObject<STSSearchBarDelegate> *stsDelegate; // ivar: _stsDelegate




@end


#endif