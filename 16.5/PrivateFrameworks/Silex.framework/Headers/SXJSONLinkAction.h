// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXJSONLINKACTION_H
#define SXJSONLINKACTION_H

@class NSURL, NSString;
@protocol SXLinkAction;


#import "SXJSONAction.h"
#import "SXJSONDictionary.h"

@interface SXJSONLinkAction : SXJSONAction <SXLinkAction>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) SXJSONDictionary *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;




@end


#endif