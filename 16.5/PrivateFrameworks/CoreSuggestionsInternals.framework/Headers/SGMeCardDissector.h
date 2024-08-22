// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMECARDDISSECTOR_H
#define SGMECARDDISSECTOR_H

@class NSString;
@protocol SGTextMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGMeCardDissector : SGPipelineDissector <SGTextMessageProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)dissectTextMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif