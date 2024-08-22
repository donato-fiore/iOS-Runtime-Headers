// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCALENDARATTACHMENTDISSECTOR_H
#define SGCALENDARATTACHMENTDISSECTOR_H

@class SGMEventICSOpportunity, NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"
#import "SGAccountsAdapter.h"

@interface SGCalendarAttachmentDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    SGMEventICSOpportunity *_icsOpportunityTracker;
    SGAccountsAdapter *_accountsAdapter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)replaceTzid:(id)arg0 inDocument:(id)arg1 fromOriginal:(id)arg2 withBaseLength:(NSUInteger)arg3 withEventRange:(struct _NSRange )arg4 ;
+(id)baseAttachmentFrom:(id)arg0 includingEvents:(id)arg1 withRanges:(id)arg2 ;
+(id)splitAttachment:(id)arg0 intoEvents:(id)arg1 withTimezones:(id)arg2 ;
-(BOOL)hasCalendarAccountForOneOf:(id)arg0 ;
-(BOOL)isRequestFromSharedCalendarProvider:(id)arg0 ;
-(BOOL)shouldIgnoreEntity:(id)arg0 ;
-(id)downloadedCalendarAttachmentsFrom:(id)arg0 ;
-(id)enrichmentsFromData:(id)arg0 inDocument:(id)arg1 parentMessage:(id)arg2 parentEntity:(id)arg3 ;
-(id)init;
-(struct SGMEventICSSourceType_ )accountTypeFor:(id)arg0 ;
-(void)_dissectMessage:(id)arg0 entity:(id)arg1 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif