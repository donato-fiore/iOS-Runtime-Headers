// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBEVENT_H
#define DBEVENT_H


#import <Foundation/Foundation.h>


@interface DBEvent : NSObject

@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)eventWithType:(NSUInteger)arg0 context:(id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 context:(id)arg1 ;


@end


#endif