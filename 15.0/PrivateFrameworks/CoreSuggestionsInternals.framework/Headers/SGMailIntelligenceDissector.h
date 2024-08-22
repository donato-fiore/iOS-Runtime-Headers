// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMAILINTELLIGENCEDISSECTOR_H
#define SGMAILINTELLIGENCEDISSECTOR_H

@class NSString;
@protocol SGMailMessageProcessing;


#import "SGPipelineDissector.h"

@interface SGMailIntelligenceDissector : SGPipelineDissector <SGMailMessageProcessing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(float)computeContactConnectionScoreFromEmailAddress:(id)arg0 usingEntityStore:(id)arg1 ;
+(id)getContactIdentifierForEmail:(id)arg0 usingEntityStore:(id)arg1 ;
-(void)dissectMailMessage:(id)arg0 entity:(id)arg1 context:(id)arg2 ;


@end


#endif