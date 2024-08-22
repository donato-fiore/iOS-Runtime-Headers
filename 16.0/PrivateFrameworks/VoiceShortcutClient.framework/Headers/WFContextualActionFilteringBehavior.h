// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFCONTEXTUALACTIONFILTERINGBEHAVIOR_H
#define WFCONTEXTUALACTIONFILTERINGBEHAVIOR_H

@class NSPredicate, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSPredicate *daemonPredicate; // ivar: _daemonPredicate
@property (readonly, nonatomic) NSPredicate *inClientPredicate; // ivar: _inClientPredicate
@property (readonly, nonatomic) NSSet *matchingTypes; // ivar: _matchingTypes


+(BOOL)supportsSecureCoding;
+(id)filteringWithMatchingTypes:(id)arg0 predicate:(id)arg1 ;
+(id)filteringWithMatchingTypes:(id)arg0 predicate:(id)arg1 daemonPredicate:(id)arg2 ;
+(id)matchAllFiles;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchingTypes:(id)arg0 inClientPredicate:(id)arg1 daemonPredicate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif