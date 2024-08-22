// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNDICTIONARYPRIMITIVEUSERDEFAULTS_H
#define CNDICTIONARYPRIMITIVEUSERDEFAULTS_H

@class NSMutableDictionary, NSString;
@protocol CNPrimitiveUserDefaults;

#import <Foundation/Foundation.h>


@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults>

 {
    NSMutableDictionary *_preferences;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger setupAutosyncCount; // ivar: _setupAutosyncCount
@property (readonly) Class superclass;
@property (readonly) NSUInteger synchronizeCount; // ivar: _synchronizeCount


-(BOOL)primitiveBoolValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(BOOL)synchronize;
-(NSInteger)primitiveIntegerValueForKey:(id)arg0 keyExists:(*BOOL)arg1 ;
-(id)init;
-(id)primitiveObjectForKey:(id)arg0 ;
-(void)primitiveRemoveObjectForKey:(id)arg0 ;
-(void)setPrimitiveObject:(id)arg0 forKey:(id)arg1 ;
-(void)setupAutosync;


@end


#endif