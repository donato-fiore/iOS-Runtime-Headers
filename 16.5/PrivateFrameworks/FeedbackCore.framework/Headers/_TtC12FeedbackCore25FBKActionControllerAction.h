// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12FEEDBACKCORE25FBKACTIONCONTROLLERACTION_H
#define _TTC12FEEDBACKCORE25FBKACTIONCONTROLLERACTION_H

@class UIImage, NSString;

#import <Foundation/Foundation.h>


@interface _TtC12FeedbackCore25FBKActionControllerAction : NSObject {
    ? title;
    ? actionHandler;
}


@property (nonatomic, copy) id *actionHandler;
@property (nonatomic) BOOL destructive; // ivar: destructive
@property (nonatomic, retain) UIImage *image; // ivar: image
@property (nonatomic, copy) NSString *title;


-(id)init;
-(id)initWithTitle:(id)arg0 image:(id)arg1 actionHandler:(id)arg2 ;


@end


#endif