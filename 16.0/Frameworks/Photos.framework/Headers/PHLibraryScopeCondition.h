// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHLIBRARYSCOPECONDITION_H
#define PHLIBRARYSCOPECONDITION_H

@class PLLibraryScopeCondition;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PHLibraryScopeCondition : NSObject <NSCopying>



@property (nonatomic) NSUInteger criteria;
@property (retain, nonatomic) PLLibraryScopeCondition *proxyObject; // ivar: _proxyObject
@property (readonly, nonatomic) NSUInteger type;


+(Class)_mappedPLConditionClass;
+(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)initWithProxyObject:(id)arg0 ;


@end


#endif