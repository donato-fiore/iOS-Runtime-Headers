// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDELIVERYRECEIPTPROCESSINGPIPELINECOMPONENT_H
#define IMDELIVERYRECEIPTPROCESSINGPIPELINECOMPONENT_H

@class IMPipelineComponent;


#import "IMDMessageStore.h"

@interface IMDeliveryReceiptProcessingPipelineComponent : IMPipelineComponent {
    IMDMessageStore *_messageStore;
}




-(id)_processDeliveryReceiptForMessageGUID:(id)arg0 date:(id)arg1 ;
-(id)initWithMessageStore:(id)arg0 ;
-(id)runIndividuallyWithInput:(id)arg0 ;
-(void)_metricMessageGUIDDelivered:(id)arg0 sendDate:(id)arg1 deliveryDate:(id)arg2 ;


@end


#endif