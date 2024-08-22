// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKDISAMBIGUATIONPOD_H
#define SAGKDISAMBIGUATIONPOD_H

@class NSString;


#import "SAGKPodView.h"

@interface SAGKDisambiguationPod : SAGKPodView

@property (copy, nonatomic) NSString *text;


+(id)disambiguationPod;
+(id)disambiguationPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif