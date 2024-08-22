// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUTURNINPUT_H
#define SIRINLUTURNINPUT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SIRINLUTurnContext.h"

@interface SIRINLUTurnInput : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *activeTasks; // ivar: _activeTasks
@property (retain, nonatomic) NSArray *asrOutputs; // ivar: _asrOutputs
@property (retain, nonatomic) NSArray *executedTasks; // ivar: _executedTasks
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) NSArray *salientEntities; // ivar: _salientEntities
@property (nonatomic) NSUInteger startTimestamp; // ivar: _startTimestamp
@property (retain, nonatomic) NSArray *systemDialogActs; // ivar: _systemDialogActs
@property (nonatomic) BOOL tapToEdit; // ivar: _tapToEdit
@property (retain, nonatomic) SIRINLUTurnContext *turnContext; // ivar: _turnContext


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAsrOutputs:(id)arg0 salientEntities:(id)arg1 turnContext:(id)arg2 ;
-(id)initWithAsrOutputs:(id)arg0 salientEntities:(id)arg1 turnContext:(id)arg2 locale:(id)arg3 tapToEdit:(BOOL)arg4 startTimestamp:(NSUInteger)arg5 ;
-(id)initWithAsrOutputs:(id)arg0 systemDialogActs:(id)arg1 activeTasks:(id)arg2 executedTasks:(id)arg3 salientEntities:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif