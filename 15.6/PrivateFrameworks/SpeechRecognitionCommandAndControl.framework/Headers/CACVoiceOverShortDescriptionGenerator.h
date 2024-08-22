// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACVOICEOVERSHORTDESCRIPTIONGENERATOR_H
#define CACVOICEOVERSHORTDESCRIPTIONGENERATOR_H


#import <Foundation/Foundation.h>


@interface CACVoiceOverShortDescriptionGenerator : NSObject



+(id)sharedInstance;
-(id)_items:(id)arg0 byKeyGeneratedUsingBlock:(id)arg1 ;
-(id)_lowerPitchForString:(id)arg0 ;
-(id)shortDescriptionsForItems:(id)arg0 style:(NSInteger)arg1 ;
-(void)_addToItemShortDescriptionPairs:(id)arg0 foritems:(id)arg1 keyGenerationBlocks:(id)arg2 shortDescriptionGenerationBlocks:(id)arg3 lastResortShortDescriptionGenerationBlock:(id)arg4 ;


@end


#endif