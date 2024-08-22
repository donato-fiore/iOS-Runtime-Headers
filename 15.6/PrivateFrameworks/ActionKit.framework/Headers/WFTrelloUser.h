// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTRELLOUSER_H
#define WFTRELLOUSER_H

@class NSURL, NSString;


#import "WFTrelloObject.h"

@interface WFTrelloUser : WFTrelloObject

@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *email; // ivar: _email
@property (readonly, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;


@end


#endif