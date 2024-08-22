// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIPERSONSMODELEQUIVALENCYTABLE_H
#define HMIPERSONSMODELEQUIVALENCYTABLE_H

@class HMFObject, NSString, NSDictionary;
@protocol HMFLogging;



@interface HMIPersonsModelEquivalencyTable : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *personToEquivalencyCell; // ivar: _personToEquivalencyCell
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)facesAreSamePersonFromSet:(id)arg0 andSet:(id)arg1 ;
-(BOOL)facesAreSamePersonFromSet:(id)arg0 andSet:(id)arg1 distanceThreshold:(CGFloat)arg2 percentMatchingThreshold:(CGFloat)arg3 ;
-(id)equivalencyCellForPerson:(id)arg0 ;
-(id)initWith;
-(id)initWithPersonsModels:(id)arg0 userDefinedPersonLinks:(id)arg1 error:(*id)arg2 ;


@end


#endif