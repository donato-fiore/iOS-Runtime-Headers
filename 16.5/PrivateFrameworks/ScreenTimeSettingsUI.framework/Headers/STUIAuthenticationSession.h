// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUIAUTHENTICATIONSESSION_H
#define STUIAUTHENTICATIONSESSION_H

@class NSString;
@protocol STAuthenticationSession;

#import <Foundation/Foundation.h>


@interface STUIAuthenticationSession : NSObject <STAuthenticationSession>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAlreadyEnteredPINForSession; // ivar: _hasAlreadyEnteredPINForSession
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)shared;
-(id)init;
-(void)_passcodeSessionHasEnded:(id)arg0 ;


@end


#endif