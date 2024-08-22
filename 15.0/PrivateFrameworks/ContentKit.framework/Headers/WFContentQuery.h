// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTENTQUERY_H
#define WFCONTENTQUERY_H

@class NSSet, NSArray, NSDictionary;
@protocol WFContentPropertyContainer;

#import <Foundation/Foundation.h>

#import "WFContentPredicate.h"

@interface WFContentQuery : NSObject <WFContentPropertyContainer>



@property (readonly, nonatomic) NSSet *containedProperties;
@property (readonly, nonatomic) WFContentPredicate *predicate; // ivar: _predicate
@property (nonatomic) _WFContentSlice slice; // ivar: _slice
@property (copy, nonatomic) NSArray *sortDescriptors; // ivar: _sortDescriptors
@property (copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(BOOL)canEvaluateObjects:(id)arg0 withPropertySubstitutor:(id)arg1 ;
-(id)description;
-(id)initWithPredicate:(id)arg0 ;
-(void)runWithObjects:(id)arg0 completionHandler:(id)arg1 ;
// -(void)runWithObjects:(id)arg0 propertySubstitutor:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif