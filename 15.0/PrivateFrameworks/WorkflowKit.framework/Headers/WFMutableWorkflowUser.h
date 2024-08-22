// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMUTABLEWORKFLOWUSER_H
#define WFMUTABLEWORKFLOWUSER_H

@class NSString, NSURL;


#import "WFWorkflowUser.h"

@interface WFMutableWorkflowUser : WFWorkflowUser

@property (copy, nonatomic) NSString *email; // ivar: email
@property (copy, nonatomic) NSString *fullName; // ivar: fullName
@property (nonatomic) NSInteger mainIdentity; // ivar: mainIdentity
@property (retain, nonatomic) NSURL *profileImageURL; // ivar: profileImageURL
@property (copy, nonatomic) NSString *twitter; // ivar: twitter
@property (retain, nonatomic) NSURL *websiteURL; // ivar: websiteURL




@end


#endif