// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATABASERESULTTIEREDFETCHREQUESTOPERATION_H
#define WFDATABASERESULTTIEREDFETCHREQUESTOPERATION_H

@class NSString, NSEntityDescription, NSArray, NSSet;
@protocol WFDatabaseResultFetchOperation;

#import <Foundation/Foundation.h>


@interface WFDatabaseResultTieredFetchRequestOperation : NSObject <WFDatabaseResultFetchOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSArray *fetchRequests; // ivar: _fetchRequests
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors; // ivar: _relationshipKeysAffectingDescriptors
@property (readonly, nonatomic) NSInteger resultsLimit; // ivar: _resultsLimit
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)countWithContext:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFetchRequests:(id)arg0 resultsLimit:(NSInteger)arg1 ;
-(id)initWithFetchRequests:(id)arg0 resultsLimit:(NSInteger)arg1 relationshipKeysAffectingDescriptors:(id)arg2 ;
-(id)resultsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif