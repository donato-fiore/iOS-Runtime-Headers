// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGKIMAGEPOD_H
#define SAGKIMAGEPOD_H

@class NSArray;


#import "SAGKPodView.h"

@interface SAGKImagePod : SAGKPodView

@property (copy, nonatomic) NSArray *images;


+(id)imagePod;
+(id)imagePodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif