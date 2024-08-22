// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRCOMPONENTVERIDIAN_H
#define CRCOMPONENTVERIDIAN_H

@class NSString;


#import "CRComponentBase.h"

@interface CRComponentVeridian : CRComponentBase {
    NSString *identiferBase64;
}




+(id)sharedSingleton;
-(id)_init;
-(id)identiferBase64;
-(id)init;
-(void)challengeComponentWith:(id)arg0 withReply:(id)arg1 ;
-(void)setIdentiferBase64:(id)arg0 ;
-(void)signVeridianWith:(id)arg0 withReply:(id)arg1 ;


@end


#endif