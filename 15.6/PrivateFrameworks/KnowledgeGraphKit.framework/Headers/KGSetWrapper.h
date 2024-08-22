// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef KGSETWRAPPER_H
#define KGSETWRAPPER_H

@class NSSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface KGSetWrapper : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, nonatomic) NSSet *set; // ivar: _set


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArray:(id)arg0 ;
-(id)initWithSet:(id)arg0 ;


@end


#endif