// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMUTABLESIZEDICT_H
#define STMUTABLESIZEDICT_H

@class NSMutableDictionary;


#import "STSizeDict.h"

@interface STMutableSizeDict : STSizeDict {
    NSMutableDictionary *_mutableDictionary;
}




-(BOOL)hasKey:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(void)addSize:(id)arg0 toKey:(id)arg1 ;
-(void)plusEquals:(id)arg0 ;
-(void)removeSmallerThan:(NSInteger)arg0 ;
-(void)setSize:(id)arg0 forKey:(id)arg1 ;


@end


#endif