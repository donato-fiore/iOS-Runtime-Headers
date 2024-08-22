// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTPREDICATE_H
#define WFCONTENTPREDICATE_H

@class NSSet;
@protocol WFContentPropertyContainer;

#import <Foundation/Foundation.h>


@interface WFContentPredicate : NSObject <WFContentPropertyContainer>

 {
    id *_block;
}


@property (readonly, nonatomic) NSSet *containedProperties;


+(id)falsePredicate;
+(id)predicateWithBlock:(id)arg0 ;
+(id)truePredicate;
-(id)initWithBlock:(id)arg0 ;
-(void)evaluateWithObject:(id)arg0 completionHandler:(id)arg1 ;
// -(void)evaluateWithObject:(id)arg0 propertySubstitutor:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif