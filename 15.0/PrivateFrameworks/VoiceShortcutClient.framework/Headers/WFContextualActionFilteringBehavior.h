// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFCONTEXTUALACTIONFILTERINGBEHAVIOR_H
#define WFCONTEXTUALACTIONFILTERINGBEHAVIOR_H

@class NSPredicate, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSPredicate *filesPredicate; // ivar: _filesPredicate
@property (readonly, nonatomic) NSSet *matchingTypes; // ivar: _matchingTypes
@property (readonly, nonatomic) NSPredicate *thoroughFilteringPredicate; // ivar: _thoroughFilteringPredicate


+(BOOL)supportsSecureCoding;
+(id)filteringWithMatchingTypes:(id)arg0 predicate:(id)arg1 ;
+(id)filteringWithMatchingTypes:(id)arg0 predicate:(id)arg1 thoroughFilteringPredicate:(id)arg2 ;
+(id)matchAllFiles;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchingTypes:(id)arg0 filesPredicate:(id)arg1 thoroughFilteringPredicate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif