// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFETCHPERSONSOPERATION_H
#define HMIFETCHPERSONSOPERATION_H

@class HMFOperation, NSArray, NSString, NSSet;
@protocol HMFObject, HMFLogging, HMIPersonManagerDataSource;



@interface HMIFetchPersonsOperation : HMFOperation <HMFObject, HMFLogging>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) NSObject<HMIPersonManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *persons; // ivar: _persons
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithDataSource:(id)arg0 ;
-(void)main;
-(void)mainInsideAutoreleasePool;


@end


#endif