// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKDATASUBSCRIPT_H
#define IKDATASUBSCRIPT_H



#import "IKDataAccessor.h"

@interface IKDataSubscript : IKDataAccessor

@property (readonly, nonatomic) NSInteger subscriptIndex; // ivar: _subscriptIndex


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSubscriptIndex:(NSInteger)arg0 ;


@end


#endif