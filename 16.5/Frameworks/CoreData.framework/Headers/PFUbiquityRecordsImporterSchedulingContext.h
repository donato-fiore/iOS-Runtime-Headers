// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYRECORDSIMPORTERSCHEDULINGCONTEXT_H
#define PFUBIQUITYRECORDSIMPORTERSCHEDULINGCONTEXT_H

@class NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet *_scheduledLogLocations;
    NSMutableSet *_pendingLogLocations;
    NSMutableSet *_failedLogLocations;
    NSMutableSet *_ignoredLogLocations;
    NSMutableDictionary *_logLocationsToEncounteredErrors;
    int _lock;
}




-(id)description;
-(id)init;
-(id)initWithPendingLogLocations:(id)arg0 ;
-(void)dealloc;


@end


#endif