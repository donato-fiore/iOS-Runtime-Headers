// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONMODELMEMORYSTORE_H
#define SBICONMODELMEMORYSTORE_H

@class NSDictionary, NSString;
@protocol SBIconModelStore;

#import <Foundation/Foundation.h>


@interface SBIconModelMemoryStore : NSObject <SBIconModelStore>



@property (copy, nonatomic) NSDictionary *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *desiredState; // ivar: _desiredState
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)deleteCurrentIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)deleteDesiredIconStateWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)saveCurrentIconState:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithCurrentState:(id)arg0 desiredState:(id)arg1 ;
-(id)loadCurrentIconState:(*id)arg0 ;
-(id)loadDesiredIconState:(*id)arg0 ;


@end


#endif