// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSCENECONFIDENCETHRESHOLDHELPER_H
#define CLSSCENECONFIDENCETHRESHOLDHELPER_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CLSSceneConfidenceThresholdHelper : NSObject {
    NSArray *_sceneNames;
    NSUInteger _thresholdType;
    NSMutableDictionary *_confidenceThresholdBySceneIdentifierBySceneModelIdentifier;
    os_unfair_lock_s _confidenceThresholdBySceneIdentifierBySceneModelIdentifierLock;
}




-(id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)arg0 ;
-(id)initWithSceneNames:(id)arg0 thresholdType:(NSUInteger)arg1 ;


@end


#endif