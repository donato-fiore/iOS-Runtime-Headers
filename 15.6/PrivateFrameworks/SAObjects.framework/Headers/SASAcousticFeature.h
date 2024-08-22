// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASACOUSTICFEATURE_H
#define SASACOUSTICFEATURE_H

@class NSArray, NSString, NSNumber;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SASAcousticFeature : AceObject <SAAceSerializable>



@property (copy, nonatomic) NSArray *acousticFeaturePerFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSNumber *frameDuration;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)acousticFeature;
+(id)acousticFeatureWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif