// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCOREDATACLOUDTRANSFORMCHANGESET_H
#define HMDCOREDATACLOUDTRANSFORMCHANGESET_H

@class NSMutableSet, NSMutableDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    NSUUID *_homeModelID;
}




-(id)description;


@end


#endif