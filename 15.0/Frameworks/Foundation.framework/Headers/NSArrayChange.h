// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSARRAYCHANGE_H
#define NSARRAYCHANGE_H


#import <Foundation/Foundation.h>


@interface NSArrayChange : NSObject

@property (readonly) NSUInteger changeType;
@property (readonly) NSUInteger destinationIndex;
@property (readonly) NSUInteger sourceIndex;
@property (readonly) id *value;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSUInteger)arg0 sourceIndex:(NSUInteger)arg1 destinationIndex:(NSUInteger)arg2 value:(id)arg3 ;


@end


#endif