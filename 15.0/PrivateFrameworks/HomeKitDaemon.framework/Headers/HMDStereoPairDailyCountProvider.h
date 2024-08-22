// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSTEREOPAIRDAILYCOUNTPROVIDER_H
#define HMDSTEREOPAIRDAILYCOUNTPROVIDER_H

@class NSString, NSArray;
@protocol HMDLogEventDailyProvider, HMDStereoPairDailyCountProviderContext;

#import <Foundation/Foundation.h>


@interface HMDStereoPairDailyCountProvider : NSObject <HMDLogEventDailyProvider>



@property (readonly) NSObject<HMDStereoPairDailyCountProviderContext> *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) Class superclass;


-(NSUInteger)smallHomePodPairCount;
-(id)initWithContext:(id)arg0 ;
-(void)submitLogEvent;


@end


#endif