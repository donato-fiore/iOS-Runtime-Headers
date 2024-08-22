// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAGKPROPERTYPOD_H
#define SAGKPROPERTYPOD_H

@class NSArray;


#import "SAGKPodView.h"

@interface SAGKPropertyPod : SAGKPodView

@property (copy, nonatomic) NSArray *propertyList;


+(id)propertyPod;
+(id)propertyPodWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif