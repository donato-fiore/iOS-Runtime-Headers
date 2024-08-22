// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRCOMPONENTDISPLAYROSWELL_H
#define CRCOMPONENTDISPLAYROSWELL_H

@class NSString;


#import "CRComponentBase.h"

@interface CRComponentDisplayRoswell : CRComponentBase {
    NSString *identiferBase64;
}




+(id)sharedSingleton;
-(id)_init;
-(id)identiferBase64;
-(id)init;
-(void)challengeComponentWith:(id)arg0 withReply:(id)arg1 ;
-(void)setIdentiferBase64:(id)arg0 ;
-(void)signDisplayRoswellWith:(id)arg0 withReply:(id)arg1 ;


@end


#endif