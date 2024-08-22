// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEFILTERBLOCKPAGE_H
#define NEFILTERBLOCKPAGE_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface NEFilterBlockPage : NSObject {
    NSString *_organization;
    NSURL *_pageTemplateURL;
    NSString *_userURL;
    NSString *_formActionURL;
    NSString *_unblockStyle;
    NSString *_remediationButtonText;
}




-(id)init;


@end


#endif