// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGKSUMMARYPOD_H
#define SAGKSUMMARYPOD_H

@class NSString;


#import "SAGKPodView.h"
#import "SAUIImageResource.h"

@interface SAGKSummaryPod : SAGKPodView

@property (copy, nonatomic) NSString *caption;
@property (retain, nonatomic) SAUIImageResource *imageResource;
@property (copy, nonatomic) NSString *text;


+(id)summaryPod;
+(id)summaryPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif