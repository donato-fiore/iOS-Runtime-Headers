// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKUPDATEASMCLASSOPERATION_H
#define CRKUPDATEASMCLASSOPERATION_H

@class CATOperation, NSString;
@protocol CRKClassKitRosterRequirements;


#import "CRKASMCourseUpdateProperties.h"

@interface CRKUpdateASMClassOperation : CATOperation

@property (readonly, copy, nonatomic) NSString *objectID; // ivar: _objectID
@property (readonly, copy, nonatomic) CRKASMCourseUpdateProperties *properties; // ivar: _properties
@property (readonly, nonatomic) NSObject<CRKClassKitRosterRequirements> *requirements; // ivar: _requirements


-(BOOL)isAsynchronous;
-(id)classWithObjectID:(id)arg0 inClasses:(id)arg1 ;
-(id)initWithObjectID:(id)arg0 properties:(id)arg1 requirements:(id)arg2 ;
-(id)makePropertyApplicator;
-(void)applyPropertiesToClass:(id)arg0 ;
-(void)didFetchClasses:(id)arg0 error:(id)arg1 ;
-(void)fetchClasses;
-(void)main;
-(void)saveClass:(id)arg0 ;


@end


#endif