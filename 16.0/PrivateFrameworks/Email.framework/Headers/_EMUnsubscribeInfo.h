// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EMUNSUBSCRIBEINFO_H
#define _EMUNSUBSCRIBEINFO_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface _EMUnsubscribeInfo : NSObject {
    NSURL *_mailtoURL;
    NSURL *_postURL;
    NSString *_postContent;
}




-(id)initWithHeaders:(id)arg0 ;


@end


#endif