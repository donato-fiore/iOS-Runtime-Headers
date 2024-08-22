// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMCONCRETEUSERDIRECTORY_H
#define CRKASMCONCRETEUSERDIRECTORY_H

@class NSString;
@protocol CRKASMUserDirectory, CRKClassKitRosterRequirements;

#import <Foundation/Foundation.h>


@interface CRKASMConcreteUserDirectory : NSObject <CRKASMUserDirectory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *queryGenerator; // ivar: _queryGenerator
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements
@property (readonly) Class superclass;


+(id)instructorDirectoryWithRosterRequirements:(id)arg0 locationIDs:(id)arg1 ;
+(id)studentDirectoryWithRosterRequirements:(id)arg0 locationIDs:(id)arg1 ;
-(id)initWithRosterRequirements:(id)arg0 queryGenerator:(id)arg1 ;
-(id)iteratorForSearchString:(id)arg0 sortingGivenNameFirst:(BOOL)arg1 pageSize:(NSInteger)arg2 ;


@end


#endif