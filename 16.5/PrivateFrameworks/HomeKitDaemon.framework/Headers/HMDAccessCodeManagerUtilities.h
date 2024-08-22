// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSCODEMANAGERUTILITIES_H
#define HMDACCESSCODEMANAGERUTILITIES_H

@class HMFObject, NSString;
@protocol HMDAccessCodeManagerUtilitiesProtocol, HMFLogging;



@interface HMDAccessCodeManagerUtilities : HMFObject <HMDAccessCodeManagerUtilitiesProtocol, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)allModificationRequests:(id)arg0 areAddingAccessCode:(id)arg1 ;
+(BOOL)anyModificationFailed:(id)arg0 ;
+(id)addedAccessoryAccessCodesFromModificationResponses:(id)arg0 ;
+(id)filteredFetchResponses:(id)arg0 forUser:(id)arg1 ;
+(id)logCategory;
+(id)removedAccessoryAccessCodesFromModificationResponses:(id)arg0 ;
+(id)updatedAccessoryAccessCodesFromModificationResponses:(id)arg0 ;


@end


#endif