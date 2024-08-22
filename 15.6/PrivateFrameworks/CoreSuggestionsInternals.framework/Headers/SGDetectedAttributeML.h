// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGDETECTEDATTRIBUTEML_H
#define SGDETECTEDATTRIBUTEML_H

@protocol PMLTrainingProtocol;

#import <Foundation/Foundation.h>


@interface SGDetectedAttributeML : NSObject {
    id<PMLTrainingProtocol> *_localTraining;
}




-(id)birthdayCongratsTextMessage:(id)arg0 andLanguage:(id)arg1 andHealthStore:(id)arg2 ;
-(id)detectionFromMatch:(id)arg0 plainTextContent:(id)arg1 extractionInfo:(id)arg2 isUnlikelyPhone:(BOOL)arg3 ;
-(id)detectionFromMessage:(id)arg0 ddMatch:(id)arg1 matchedContext:(id)arg2 withSupervision:(id)arg3 inConversation:(id)arg4 entityLanguage:(id)arg5 ;
-(id)init;
-(id)initWithTraining:(id)arg0 ;
-(id)selfIdDetectionWithTextMessage:(id)arg0 inConversation:(id)arg1 withSupervision:(id)arg2 ;
-(void)addSessionForTrainingWithSource:(id)arg0 label:(NSInteger)arg1 language:(id)arg2 objective:(NSUInteger)arg3 spotlightRef:(id)arg4 embeddedFeaturizer:(id)arg5 ;
-(void)handleTextMessageContactSharing:(id)arg0 andMatch:(id)arg1 andContext:(id)arg2 andLanguage:(id)arg3 withSupervision:(id)arg4 ;
-(void)handleTextMessageContactSharingWithNegativeSample:(id)arg0 andLanguage:(id)arg1 ;


@end


#endif