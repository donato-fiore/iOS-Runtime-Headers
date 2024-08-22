// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FCACCOUNTACTIONQUEUE_H
#define FCACCOUNTACTIONQUEUE_H


#import <Foundation/Foundation.h>

#import "FCPersistentDictionary.h"

@interface FCAccountActionQueue : NSObject

@property (retain, nonatomic) FCPersistentDictionary *persistentDictionary; // ivar: _persistentDictionary


-(BOOL)enqueueActionWithType:(NSInteger)arg0 ;
-(BOOL)popActionTypesUpToCount:(NSUInteger)arg0 setLocalDataHintIfNeeded:(BOOL)arg1 ;
-(BOOL)readLocalDataHint;
-(id)init;
-(id)initWithFileURL:(id)arg0 ;
-(id)peekAtActionTypes;


@end


#endif