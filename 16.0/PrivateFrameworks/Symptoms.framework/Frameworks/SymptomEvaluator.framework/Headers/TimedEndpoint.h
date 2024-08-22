// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIMEDENDPOINT_H
#define TIMEDENDPOINT_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface TimedEndpoint : NSObject {
    NSString *_trigger;
}


@property (readonly, nonatomic) BOOL foreground; // ivar: _foreground
@property (readonly, nonatomic) NSInteger interfaceType; // ivar: _interfaceType
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger stallType; // ivar: _stallType
@property (readonly, nonatomic) NSDate *time; // ivar: _time


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithEndpoint:(id)arg0 trigger:(id)arg1 interfaceType:(NSInteger)arg2 stallType:(NSUInteger)arg3 foreground:(BOOL)arg4 ;
-(void)touch;


@end


#endif