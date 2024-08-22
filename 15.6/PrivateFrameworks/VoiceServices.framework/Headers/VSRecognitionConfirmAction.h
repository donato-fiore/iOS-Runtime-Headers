// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRECOGNITIONCONFIRMACTION_H
#define VSRECOGNITIONCONFIRMACTION_H



#import "VSRecognitionRecognizeAction.h"
#import "VSRecognitionAction.h"

@interface VSRecognitionConfirmAction : VSRecognitionRecognizeAction {
    VSRecognitionAction *_confirmedAction;
    VSRecognitionAction *_deniedAction;
    ? _confirmFlags;
}




-(id)confirmedAction;
-(id)deniedAction;
-(id)init;
-(id)initWithModelIdentifier:(id)arg0 ;
-(int)completionType;
-(void)_setConfirmed:(BOOL)arg0 ;
-(void)dealloc;
-(void)setConfirmedAction:(id)arg0 ;
-(void)setDeniedAction:(id)arg0 ;


@end


#endif