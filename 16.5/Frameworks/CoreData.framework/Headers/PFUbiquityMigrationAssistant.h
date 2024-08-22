// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYMIGRATIONASSISTANT_H
#define PFUBIQUITYMIGRATIONASSISTANT_H

@class NSString, NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityMigrationAssistant : NSObject {
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSString *_currentModelVersionHash;
}




-(id)initWithUbiquityRootLocation:(id)arg0 peerID:(id)arg1 ubiquityName:(id)arg2 modelVersionHash:(id)arg3 ;
-(void)dealloc;


@end


#endif