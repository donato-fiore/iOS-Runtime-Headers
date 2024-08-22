// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITEXTCHECKEREXEMPTIONSIMPL_H
#define TITEXTCHECKEREXEMPTIONSIMPL_H

@class NSSet, NSUUID;

#import <Foundation/Foundation.h>


@interface TITextCheckerExemptionsImpl : NSObject {
    id *_contactObserver;
    id *_userDictionaryObserver;
    NSUInteger _observerAssertionCount;
}


@property (retain, nonatomic) NSSet *addressBookTokens; // ivar: _addressBookTokens
@property (retain, nonatomic) NSSet *userDictionaryTokens; // ivar: _userDictionaryTokens
@property (copy, nonatomic) NSUUID *userDictionaryUUID; // ivar: _userDictionaryUUID


+(id)sharedTextCheckerExemptionsImpl;
-(BOOL)stringIsExemptFromChecker:(id)arg0 ;
-(void)addObserverAssertion;
-(void)dealloc;
-(void)removeObserverAssertion;


@end


#endif