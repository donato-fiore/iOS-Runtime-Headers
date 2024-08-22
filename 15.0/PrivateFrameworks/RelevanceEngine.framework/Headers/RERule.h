// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERULE_H
#define RERULE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RERule : NSObject <NSCopying>



@property (nonatomic) float priority; // ivar: _priority


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif