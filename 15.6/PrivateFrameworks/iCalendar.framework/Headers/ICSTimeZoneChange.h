// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICSTIMEZONECHANGE_H
#define ICSTIMEZONECHANGE_H


#import <Foundation/Foundation.h>


@interface ICSTimeZoneChange : NSObject {
    CGFloat _interval;
    NSInteger _tzOffsetTo;
}




-(BOOL)isCloseTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)interval;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)tzOffsetTo;
-(id)description;
-(id)initWithTimeInterval:(CGFloat)arg0 tzOffsetTo:(NSInteger)arg1 ;


@end


#endif