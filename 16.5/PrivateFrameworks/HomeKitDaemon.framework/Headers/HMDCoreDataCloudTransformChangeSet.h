// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCOREDATACLOUDTRANSFORMCHANGESET_H
#define HMDCOREDATACLOUDTRANSFORMCHANGESET_H

@class NSMutableSet, NSMutableDictionary, NSUUID;

#import <Foundation/Foundation.h>


@interface HMDCoreDataCloudTransformChangeSet : NSObject {
    NSMutableSet *_inserts;
    NSMutableDictionary *_updates;
    NSMutableDictionary *_deletes;
    BOOL _shouldTransform;
    NSUUID *_homeModelID;
}




-(id)description;


@end


#endif