// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FORCEDRECONFIGURATIONCALLBACKCONTAINER_H
#define FORCEDRECONFIGURATIONCALLBACKCONTAINER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ForcedReconfigurationCallbackContainer : NSObject {
    NSUInteger _callbackCounter;
    NSMutableDictionary *_callbacks;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _label;
}




-(BOOL)isEmpty;
-(NSUInteger)addCallback:(id)arg0 ;
-(id)initWithLabel:(*void)arg0 ;
-(void)fireAll;
-(void)removeCallback:(NSUInteger)arg0 ;


@end


#endif