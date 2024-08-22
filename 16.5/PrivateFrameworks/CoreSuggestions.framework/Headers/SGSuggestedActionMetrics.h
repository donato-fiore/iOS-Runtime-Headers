// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSUGGESTEDACTIONMETRICS_H
#define SGSUGGESTEDACTIONMETRICS_H


#import <Foundation/Foundation.h>

#import "SGMContactConfirmed.h"
#import "SGMContactDetailConfirmed.h"
#import "SGMContactDetailConversationTurn.h"
#import "SGMContactDetailRejected.h"
#import "SGMContactDetailUsed.h"
#import "SGMContactInBanner.h"
#import "SGMContactRejected.h"
#import "SGMEventBannerConfirmed.h"
#import "SGMEventBannerRejected.h"
#import "SGMEventInBanner.h"
#import "SGMMaybeInformationShown.h"
#import "SGMUnknownContactInformationShown.h"

@interface SGSuggestedActionMetrics : NSObject

@property (retain, nonatomic) SGMContactConfirmed *contactConfirmed; // ivar: _contactConfirmed
@property (retain, nonatomic) SGMContactDetailConfirmed *contactDetailConfirmed; // ivar: _contactDetailConfirmed
@property (retain, nonatomic) SGMContactDetailConversationTurn *contactDetailConversationTurn; // ivar: _contactDetailConversationTurn
@property (retain, nonatomic) SGMContactDetailRejected *contactDetailRejected; // ivar: _contactDetailRejected
@property (retain, nonatomic) SGMContactDetailUsed *contactDetailUsed; // ivar: _contactDetailUsed
@property (retain, nonatomic) SGMContactInBanner *contactInBanner; // ivar: _contactInBanner
@property (retain, nonatomic) SGMContactRejected *contactRejected; // ivar: _contactRejected
@property (retain, nonatomic) SGMEventBannerConfirmed *eventBannerConfirmed; // ivar: _eventBannerConfirmed
@property (retain, nonatomic) SGMEventBannerRejected *eventBannerRejected; // ivar: _eventBannerRejected
@property (retain, nonatomic) SGMEventInBanner *eventInBanner; // ivar: _eventInBanner
@property (retain, nonatomic) SGMMaybeInformationShown *maybeInformationShown; // ivar: _maybeInformationShown
@property (retain, nonatomic) SGMUnknownContactInformationShown *unknownContactInformationShown; // ivar: _unknownContactInformationShown


+(id)instance;
+(void)recordBannerConfirmedWithContact:(id)arg0 proposedCNContact:(id)arg1 confirmedCNContact:(id)arg2 inApp:(struct SGMBannerDisplayApp_ )arg3 confirmationUI:(int)arg4 pet2Tracker:(id)arg5 ;
+(void)recordBannerConfirmedWithEvent:(id)arg0 proposedEKEvent:(id)arg1 confirmedEKEvent:(id)arg2 inApp:(struct SGMBannerDisplayApp_ )arg3 ;
+(void)recordBannerRejectedWithEvent:(id)arg0 inApp:(struct SGMBannerDisplayApp_ )arg1 ;
+(void)recordBannerShownWithContacts:(id)arg0 events:(id)arg1 inApp:(struct SGMBannerDisplayApp_ )arg2 ;
+(void)recordContactDetailEngagementWithResolution:(NSInteger)arg0 detailType:(struct SGMContactDetailType_ )arg1 extractionType:(NSUInteger)arg2 modelVersion:(id)arg3 confirmRejectUI:(int)arg4 pet2Tracker:(id)arg5 ;
+(void)recordContactDetailUsage:(id)arg0 withApp:(id)arg1 ;
+(void)recordConversationTurnWithContact:(id)arg0 received:(BOOL)arg1 curated:(BOOL)arg2 throughApp:(id)arg3 withDetailName:(id)arg4 withDetailExtraction:(id)arg5 ;
+(void)recordMaybeContactFrom:(NSUInteger)arg0 withVersion:(id)arg1 ;
+(void)recordRejectedContact:(id)arg0 inApp:(struct SGMBannerDisplayApp_ )arg1 rejectionUI:(int)arg2 pet2Tracker:(id)arg3 ;
-(id)init;


@end


#endif