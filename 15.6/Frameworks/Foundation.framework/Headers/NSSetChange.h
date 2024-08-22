// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSETCHANGE_H
#define NSSETCHANGE_H


#import <Foundation/Foundation.h>


@interface NSSetChange : NSObject

@property (readonly) NSUInteger changeType;
@property (readonly) id *value;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSUInteger)arg0 object:(id)arg1 ;


@end


#endif