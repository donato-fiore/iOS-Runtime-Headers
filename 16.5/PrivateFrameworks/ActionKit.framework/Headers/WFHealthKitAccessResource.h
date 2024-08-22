// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFHEALTHKITACCESSRESOURCE_H
#define WFHEALTHKITACCESSRESOURCE_H

@class WFAccessResource, HKHealthStore;



@interface WFHealthKitAccessResource : WFAccessResource {
    NSUInteger _status;
}


@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


+(BOOL)alwaysMakeAvailable;
+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)errorReasonForStatus:(NSUInteger)arg0 ;
-(id)errorRecoveryOptionsForStatus:(NSUInteger)arg0 ;
-(id)importErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)initWithDefinition:(id)arg0 ;
-(id)localizedErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)localizedImportErrorReasonForStatus:(NSUInteger)arg0 ;
-(id)objectTypes;
-(id)objectTypesForAccessType:(id)arg0 ;
-(id)protectedResourceDescription;
-(id)readTypes;
-(id)readableUnauthorizedResourceDescription;
-(id)writeTypes;
-(void)attemptRecoveryFromErrorWithOptionIndex:(NSUInteger)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;
-(void)refreshAvailability;


@end


#endif