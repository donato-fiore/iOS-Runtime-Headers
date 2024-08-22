// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSORDEREDSETCHANGE_H
#define NSORDEREDSETCHANGE_H


#import <Foundation/Foundation.h>


@interface NSOrderedSetChange : NSObject

@property (readonly) NSUInteger changeType;
@property (readonly) NSUInteger destinationIndex;
@property (readonly) NSUInteger sourceIndex;
@property (readonly) id *value;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSUInteger)arg0 sourceIndex:(NSUInteger)arg1 destinationIndex:(NSUInteger)arg2 value:(id)arg3 ;


@end


#endif