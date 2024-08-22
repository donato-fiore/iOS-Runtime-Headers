// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICMEDIAAPIURLMAPPING_H
#define ICMEDIAAPIURLMAPPING_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface ICMediaAPIURLMapping : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, copy, nonatomic) NSString *pattern;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif