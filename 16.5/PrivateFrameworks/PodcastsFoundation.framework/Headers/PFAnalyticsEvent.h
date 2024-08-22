// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFANALYTICSEVENT_H
#define PFANALYTICSEVENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PFAnalyticsEvent : NSObject {
    ? payloadGenerator;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *name; // ivar: name
@property (nonatomic, copy) id *payloadGenerator;


+(id)downloadedFileHasiPodLibraryURLWithDiscoveryPoint:(id)arg0 path:(id)arg1 source:(id)arg2 ;
+(id)drmKeyRecoveredWithGenerator:(id)arg0 ;
+(id)drmKeyRecoveredWithPayload:(id)arg0 ;
+(id)globalRetentionPolicy;
-(id)init;
-(id)initWithName:(id)arg0 generator:(id)arg1 ;
-(id)initWithName:(id)arg0 payload:(id)arg1 ;


@end


#endif