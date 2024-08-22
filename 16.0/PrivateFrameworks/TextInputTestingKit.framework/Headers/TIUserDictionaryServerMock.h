// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIUSERDICTIONARYSERVERMOCK_H
#define TIUSERDICTIONARYSERVERMOCK_H

@class NSMutableArray, NSString, NSArray, NSUUID;
@protocol TIUserDictionaryServing;

#import <Foundation/Foundation.h>


@interface TIUserDictionaryServerMock : NSObject <TIUserDictionaryServing>

 {
    NSMutableArray *_observers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *pairs; // ivar: _pairs
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *userDictionaryUUID;


-(id)addObserver:(id)arg0 ;
-(id)init;
-(void)getPhraseShortcutPairs:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)startServer;


@end


#endif