// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGFTMETRICSANONYMIZER_H
#define IDSGFTMETRICSANONYMIZER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSGFTMetricsAnonymizer : NSObject {
    NSUInteger _nextAnonymizedID;
    NSMutableDictionary *_assignedIDs;
}




-(id)anonymizeID:(id)arg0 ;
-(id)init;


@end


#endif