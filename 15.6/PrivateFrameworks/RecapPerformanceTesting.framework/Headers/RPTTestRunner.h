// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RPTTESTRUNNER_H
#define RPTTESTRUNNER_H

@class RCPInlinePlayer;

#import <Foundation/Foundation.h>

#import "RPTInteractionOptions.h"
#import "RPTSettings.h"

@interface RPTTestRunner : NSObject

@property (readonly, retain, nonatomic) RCPInlinePlayer *inlinePlayer; // ivar: _inlinePlayer
@property (retain, nonatomic) RPTInteractionOptions *interactionOptions; // ivar: _interactionOptions
@property (retain, nonatomic) RPTSettings *settings; // ivar: _settings


+(BOOL)isRecapAvailable;
+(void)playInteraction:(id)arg0 completionHandler:(id)arg1 ;
+(void)runTestWithParameters:(id)arg0 ;
-(BOOL)_manageTestStartAndEndForParameters:(id)arg0 ;
-(id)initWithInteractionOptions:(id)arg0 ;
-(void)playInteraction:(id)arg0 completionHandler:(id)arg1 ;
-(void)runTestWithParameters:(id)arg0 ;


@end


#endif