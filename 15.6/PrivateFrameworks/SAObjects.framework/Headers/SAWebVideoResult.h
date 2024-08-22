// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAWEBVIDEORESULT_H
#define SAWEBVIDEORESULT_H

@class NSNumber;


#import "SAWebImageResult.h"

@interface SAWebVideoResult : SAWebImageResult

@property (copy, nonatomic) NSNumber *runTimeInMilliseconds;


+(id)videoResult;
+(id)videoResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif