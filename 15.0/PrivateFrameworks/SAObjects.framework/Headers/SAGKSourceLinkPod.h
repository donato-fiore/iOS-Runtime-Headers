// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGKSOURCELINKPOD_H
#define SAGKSOURCELINKPOD_H

@class NSString;


#import "SAGKPodView.h"
#import "SAUIAppPunchOut.h"

@interface SAGKSourceLinkPod : SAGKPodView

@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) SAUIAppPunchOut *punchOut;


+(id)sourceLinkPod;
+(id)sourceLinkPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif