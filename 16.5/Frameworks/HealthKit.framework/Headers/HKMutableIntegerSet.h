// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMUTABLEINTEGERSET_H
#define HKMUTABLEINTEGERSET_H

@protocol NSSecureCoding, NSCopying;


#import "HKIntegerSet.h"

@interface HKMutableIntegerSet : HKIntegerSet <NSSecureCoding, NSCopying>

 {
    BOOL _enumerating;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)addInteger:(NSInteger)arg0 ;
-(void)enumerateIntegersUsingBlock:(id)arg0 ;
-(void)removeInteger:(NSInteger)arg0 ;


@end


#endif