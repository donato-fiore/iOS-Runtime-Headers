// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLICATIONMESSAGECONTENTVIEW_STATE_H
#define PKAPPLICATIONMESSAGECONTENTVIEW_STATE_H

@class PKApplicationMessageContent, PKApplicationMessageIcon, UIImage, UIColor, UIFont, NSAttributedString;

#import <Foundation/Foundation.h>


@interface PKApplicationMessageContentView_State : NSObject {
    PKApplicationMessageContent *_source;
    ? _visibility;
    PKApplicationMessageIcon *_icon;
    UIImage *_iconImage;
    UIColor *_iconImageTintColor;
    UIFont *_titleFont;
    NSAttributedString *_title;
    UIFont *_bodyFont;
    NSAttributedString *_body;
}




-(id)init;


@end


#endif