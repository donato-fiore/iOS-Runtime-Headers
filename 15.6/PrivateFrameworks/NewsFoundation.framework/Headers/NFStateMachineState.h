// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFSTATEMACHINESTATE_H
#define NFSTATEMACHINESTATE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NFStateMachineState : NSObject

@property (copy, nonatomic) id *canTryBlock; // ivar: _canTryBlock
@property (copy, nonatomic) id *didEnterBlock; // ivar: _didEnterBlock
@property (copy, nonatomic) id *didExitBlock; // ivar: _didExitBlock
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) id *willEnterBlock; // ivar: _willEnterBlock
@property (copy, nonatomic) id *willExitBlock; // ivar: _willExitBlock


-(BOOL)canTry:(id)arg0 withOwner:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)didEnter:(id)arg0 withOwner:(id)arg1 ;
-(id)didExit:(id)arg0 withOwner:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)onCanTry:(id)arg0 ;
-(id)onDidEnter:(id)arg0 ;
-(id)onDidExit:(id)arg0 ;
-(id)onWillEnter:(id)arg0 ;
-(id)onWillExit:(id)arg0 ;
-(void)willEnter:(id)arg0 withOwner:(id)arg1 ;
-(void)willExit:(id)arg0 withOwner:(id)arg1 ;


@end


#endif