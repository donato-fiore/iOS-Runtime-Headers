// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFURLTEXTPREVIEWVIEW_H
#define _SFURLTEXTPREVIEWVIEW_H

@class UIView, UILabel, NSURL;



@interface _SFURLTextPreviewView : UIView {
    UILabel *_domainLabel;
    UILabel *_urlLabel;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL


-(id)initWithURL:(id)arg0 ;


@end


#endif