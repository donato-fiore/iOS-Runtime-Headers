// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSCOREDICT_H
#define ATXSCOREDICT_H

@class NSSet, NSString;
@protocol ATXScoreLogSerializable;

#import <Foundation/Foundation.h>


@interface ATXScoreDict : NSObject <ATXScoreLogSerializable>

 {
    *__CFDictionary _dict;
    NSSet *_defaultKeys;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)scoreDictFromDictionary:(id)arg0 ;
-(CGFloat)scoreForKey:(id)arg0 found:(*BOOL)arg1 ;
-(id)init;
-(id)initWithDefaultValueForKeys:(id)arg0 ;
-(id)initWithDefaultValueForScoreTypeKeys;
-(id)toDictionary;
-(void)atx_writeToFile:(struct __sFILE *)arg0 ;
-(void)dealloc;
-(void)getKeys:(*id)arg0 count:(NSUInteger)arg1 ;
-(void)setScore:(CGFloat)arg0 forKey:(id)arg1 ;


@end


#endif