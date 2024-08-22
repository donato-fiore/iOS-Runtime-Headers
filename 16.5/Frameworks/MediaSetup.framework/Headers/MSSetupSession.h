// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSETUPSESSION_H
#define MSSETUPSESSION_H

@protocol MSAuthenticationPresentationContext;

#import <Foundation/Foundation.h>

#import "MSServiceAccount.h"
#import "MSSetupViewController.h"

@interface MSSetupSession : NSObject

@property (readonly, nonatomic) MSServiceAccount *account; // ivar: _account
@property (weak, nonatomic) NSObject<MSAuthenticationPresentationContext> *presentationContext; // ivar: _presentationContext
@property (readonly, nonatomic) NSUInteger testFlags; // ivar: _testFlags
@property (readonly, retain, nonatomic) MSSetupViewController *viewController; // ivar: _viewController


-(BOOL)startWithError:(*id)arg0 ;
-(id)initWithServiceAccount:(id)arg0 ;
-(id)initWithServiceAccount:(id)arg0 test:(NSUInteger)arg1 ;


@end


#endif