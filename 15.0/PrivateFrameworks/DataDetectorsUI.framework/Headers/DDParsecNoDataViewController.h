// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DDPARSECNODATAVIEWCONTROLLER_H
#define DDPARSECNODATAVIEWCONTROLLER_H

@class UIViewController, UIView, UILabel, _UIContentUnavailableView, NSURL, NSString;



@interface DDParsecNoDataViewController : UIViewController {
    UIView *_container;
    UILabel *_errorLabel;
    _UIContentUnavailableView *_emptyNoContentView;
}


@property (retain, nonatomic) NSURL *altURL; // ivar: _altURL
@property (nonatomic) BOOL lookup; // ivar: _lookup
@property (retain, nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *searchWebQuery; // ivar: _searchWebQuery


-(BOOL)_canShowWhileLocked;
-(id)manageDictionariesURL;
-(void)loadView;
-(void)manageDictionaries:(id)arg0 ;
-(void)searchWeb:(id)arg0 ;
-(void)updateStyle;


@end


#endif