// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIAPPSFOOTERVIEW_H
#define SIRIAPPSFOOTERVIEW_H

@class PSFooterHyperlinkView;
@protocol SiriAppsFooterViewDelegate;



@interface SiriAppsFooterView : PSFooterHyperlinkView

@property (weak, nonatomic) NSObject<SiriAppsFooterViewDelegate> *delegate; // ivar: _delegate


-(id)initWithSpecifier:(id)arg0 ;
-(void)didTapLearnMore:(id)arg0 ;


@end


#endif