// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTLOOPBACKTRANSLATIONSERVICE_H
#define BRLTLOOPBACKTRANSLATIONSERVICE_H



#import "BRLTTranslationService.h"
#import "BRLTSLoopbackTranslationService.h"

@interface BRLTLoopbackTranslationService : BRLTTranslationService

@property (retain, nonatomic) BRLTSLoopbackTranslationService *loopbackService; // ivar: _loopbackService


-(BOOL)isLoopback;
-(id)initWithServiceIdentifier:(id)arg0 connection:(id)arg1 loopbackService:(id)arg2 ;


@end


#endif