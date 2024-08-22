// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC21SIRIINFORMATIONSEARCH18AUDIOITEMCANDIDATE8FEATURES_H
#define _TTCC21SIRIINFORMATIONSEARCH18AUDIOITEMCANDIDATE8FEATURES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _TtCC21SiriInformationSearch18AudioItemCandidate8Features : NSObject {
    ? audioTypeMatch;
    ? glideModifier;
    ? sourceMatchFactor;
    ? fieldMatchScores;
    ? maxFieldCount;
    ? optionalFieldCount;
    ? combinedTextMatchScore;
    ? sourceTypePriority;
    ? downloadedBoostFactor;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;


@end


#endif