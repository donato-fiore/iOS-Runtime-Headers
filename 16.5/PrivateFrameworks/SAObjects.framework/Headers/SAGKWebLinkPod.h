// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKWEBLINKPOD_H
#define SAGKWEBLINKPOD_H

@class NSArray;


#import "SAGKPodView.h"

@interface SAGKWebLinkPod : SAGKPodView

@property (copy, nonatomic) NSArray *links;


+(id)webLinkPod;
+(id)webLinkPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif