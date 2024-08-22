// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLKSECTIONHEADERVIEW_H
#define TLKSECTIONHEADERVIEW_H



#import "TLKView.h"
#import "TLKProminenceView.h"
#import "TLKMultilineText.h"
#import "TLKLabel.h"

@interface TLKSectionHeaderView : TLKView

@property (retain, nonatomic) TLKProminenceView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) TLKMultilineText *headerText; // ivar: _headerText
@property (retain, nonatomic) TLKLabel *headerTextLabel; // ivar: _headerTextLabel


-(BOOL)usesDefaultLayoutMargins;
-(id)headerLabelText;
-(id)setupContentView;
-(void)observedPropertiesChanged;


@end


#endif