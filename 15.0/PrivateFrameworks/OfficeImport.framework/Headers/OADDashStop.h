// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADDASHSTOP_H
#define OADDASHSTOP_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OADDashStop : NSObject <NSCopying>

 {
    float mDash;
    float mSpace;
}




+(void)addStopWithDash:(float)arg0 space:(float)arg1 toArray:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)dash;
-(float)space;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDash:(float)arg0 space:(float)arg1 ;


@end


#endif