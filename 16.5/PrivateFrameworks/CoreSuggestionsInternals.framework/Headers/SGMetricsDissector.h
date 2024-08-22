// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMETRICSDISSECTOR_H
#define SGMETRICSDISSECTOR_H

@class NSString;
@protocol SGMailMessageProcessing, SGTextMessageProcessing;


#import "SGPipelineDissector.h"
#import "SGSqlEntityStore.h"

@interface SGMetricsDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing>

 {
    SGSqlEntityStore *_store;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldSampleMessage;
-(id)initWithEntityStore:(id)arg0 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;
-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif