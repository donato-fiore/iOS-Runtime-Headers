// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDATABASERESULTFETCHREQUESTOPERATION_H
#define WFDATABASERESULTFETCHREQUESTOPERATION_H

@class NSString, NSEntityDescription, NSFetchRequest, NSSet;
@protocol WFDatabaseResultFetchOperation;

#import <Foundation/Foundation.h>


@interface WFDatabaseResultFetchRequestOperation : NSObject <WFDatabaseResultFetchOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSEntityDescription *entity;
@property (readonly, nonatomic) NSFetchRequest *fetchRequest; // ivar: _fetchRequest
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *relationshipKeysAffectingDescriptors; // ivar: _relationshipKeysAffectingDescriptors
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)countWithContext:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFetchRequest:(id)arg0 ;
-(id)initWithFetchRequest:(id)arg0 relationshipKeysAffectingDescriptors:(id)arg1 ;
-(id)resultsWithContext:(id)arg0 error:(*id)arg1 ;


@end


#endif