// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PGINTERRUPTION_H
#define _PGINTERRUPTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _PGInterruption : NSObject <NSCopying>

 {
    NSUInteger _bs_hash;
}


@property (readonly, copy, nonatomic) NSString *attribution; // ivar: _attribution
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithReason:(NSInteger)arg0 attribution:(id)arg1 ;


@end


#endif