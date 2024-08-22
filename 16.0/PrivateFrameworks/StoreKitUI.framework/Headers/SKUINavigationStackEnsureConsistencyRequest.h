// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUINAVIGATIONSTACKENSURECONSISTENCYREQUEST_H
#define SKUINAVIGATIONSTACKENSURECONSISTENCYREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUINavigationStackEnsureConsistencyRequest : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger navigationControllerOperation; // ivar: _navigationControllerOperation
@property (readonly, nonatomic) BOOL operationDidComplete; // ivar: _operationDidComplete


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNavigationControllerOperation:(NSInteger)arg0 operationDidComplete:(BOOL)arg1 ;


@end


#endif