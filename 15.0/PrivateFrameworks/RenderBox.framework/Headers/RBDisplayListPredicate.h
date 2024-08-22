// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RBDISPLAYLISTPREDICATE_H
#define RBDISPLAYLISTPREDICATE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RBDisplayListPredicate : NSObject <NSCopying>

 {
    Invertible _predicate;
}


@property (nonatomic) BOOL invertsResult;


+(id)predicate;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteringDisplayList:(id)arg0 ;
-(void)addCondition:(int)arg0 ;
-(void)addConditionWithFillColor:(struct ? )arg0 colorSpace:(int)arg1 ;
-(void)addPredicate:(id)arg0 ;
-(void)removeAll;


@end


#endif