// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAGKVIDEOPOD_H
#define SAGKVIDEOPOD_H

@class NSArray;


#import "SAGKPodView.h"

@interface SAGKVideoPod : SAGKPodView

@property (copy, nonatomic) NSArray *videos;


+(id)videoPod;
+(id)videoPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif