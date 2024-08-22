// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRLTSTRANSLATIONSERVICE_H
#define BRLTSTRANSLATIONSERVICE_H

@protocol BRLTTranslationServiceInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRLTSTranslator.h"

@interface BRLTSTranslationService : NSObject <BRLTTranslationServiceInterface>



@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) BRLTSTranslator *queueTranslator; // ivar: _queueTranslator


+(id)exportedInterface;
-(id)init;
-(void)brailleForText:(id)arg0 parameters:(id)arg1 withReply:(id)arg2 ;
-(void)loadBrailleBundleForIdentifier:(id)arg0 ;
-(void)textForBraille:(id)arg0 parameters:(id)arg1 withReply:(id)arg2 ;


@end


#endif