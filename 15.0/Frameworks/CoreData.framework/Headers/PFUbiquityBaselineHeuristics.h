// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYBASELINEHEURISTICS_H
#define PFUBIQUITYBASELINEHEURISTICS_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"
#import "PFUbiquityKnowledgeVector.h"

@interface PFUbiquityBaselineHeuristics : NSObject <NSCopying>

 {
    NSString *_localPeerID;
    NSString *_storeName;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_modelVersionHash;
    NSInteger _numRequiredTransactions;
    NSInteger _storeSize;
    NSInteger _logSize;
    ? _logToStoreSizeRatio;
    NSInteger _minLogBytes;
    PFUbiquityKnowledgeVector *_currentBaselineKV;
    PFUbiquityKnowledgeVector *_currentKV;
}




-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithLocalPeerID:(id)arg0 storeName:(id)arg1 modelVersionHash:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)dealloc;


@end


#endif