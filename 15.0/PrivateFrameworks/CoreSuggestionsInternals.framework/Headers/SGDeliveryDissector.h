// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGDELIVERYDISSECTOR_H
#define SGDELIVERYDISSECTOR_H

@class NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGDeliveryDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createEnrichmentsForDetections:(id)arg0 entity:(id)arg1 ;
-(id)createEnrichmentWithMatch:(id)arg0 onParentEntity:(id)arg1 ;
-(void)_logDeliverySenderForSenderDomain:(id)arg0 ;
-(void)_logUniqueEnrichments:(id)arg0 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif