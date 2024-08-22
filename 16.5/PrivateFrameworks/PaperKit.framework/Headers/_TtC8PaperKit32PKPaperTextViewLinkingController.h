// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT32PKPAPERTEXTVIEWLINKINGCONTROLLER_H
#define _TTC8PAPERKIT32PKPAPERTEXTVIEWLINKINGCONTROLLER_H

@class UIMenu;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit32PKPaperTextViewLinkingController : NSObject {
    ? textView;
    ? linkingEngine;
    ? $__lazy_storage_$_addLinkClient;
    ? analytics;
    ? delegate;
}


@property (nonatomic, readonly) UIMenu *linkItemsMenu;


-(id)init;
-(id)initWithTextView:(id)arg0 ;


@end


#endif