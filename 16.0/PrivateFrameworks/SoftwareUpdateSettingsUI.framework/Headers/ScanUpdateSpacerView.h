// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCANUPDATESPACERVIEW_H
#define SCANUPDATESPACERVIEW_H

@class PSFooterHyperlinkView, NSNumber;



@interface ScanUpdateSpacerView : PSFooterHyperlinkView {
    NSNumber *_height;
}




-(CGFloat)preferredHeightForWidth:(CGFloat)arg0 inTableView:(id)arg1 ;
-(id)initWithSpecifier:(id)arg0 ;
-(void)refreshContentsWithSpecifier:(id)arg0 ;


@end


#endif