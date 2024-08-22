// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRCOMPONENTTSID_H
#define CRCOMPONENTTSID_H

@class NSString;


#import "CRComponentBase.h"

@interface CRComponentTsid : CRComponentBase {
    NSString *identiferBase64;
}




+(id)sharedSingleton;
-(BOOL)connectToIO:(*unsigned int)arg0 withError:(*id)arg1 ;
-(BOOL)issueChallenge:(id)arg0 index:(int)arg1 reponse:(*id)arg2 options:(NSUInteger)arg3 connection:(unsigned int)arg4 withError:(*id)arg5 ;
-(id)_init;
-(id)identiferBase64;
-(id)init;
-(void)challengeComponentWith:(id)arg0 withReply:(id)arg1 ;
-(void)setIdentiferBase64:(id)arg0 ;


@end


#endif