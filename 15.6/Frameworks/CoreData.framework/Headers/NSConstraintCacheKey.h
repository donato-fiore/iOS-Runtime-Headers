// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONSTRAINTCACHEKEY_H
#define NSCONSTRAINTCACHEKEY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSConstraintCacheKey : NSObject <NSCopying>

 {
    NSArray *_values;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif