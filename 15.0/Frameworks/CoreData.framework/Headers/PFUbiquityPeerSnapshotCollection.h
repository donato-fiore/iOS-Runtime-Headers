// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYPEERSNAPSHOTCOLLECTION_H
#define PFUBIQUITYPEERSNAPSHOTCOLLECTION_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface PFUbiquityPeerSnapshotCollection : NSObject {
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    BOOL _needSort;
}




-(id)init;
-(void)dealloc;


@end


#endif