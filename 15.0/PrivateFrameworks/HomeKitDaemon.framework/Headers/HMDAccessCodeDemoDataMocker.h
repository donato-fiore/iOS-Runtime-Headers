// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSCODEDEMODATAMOCKER_H
#define HMDACCESSCODEDEMODATAMOCKER_H

@class HMFObject, NSMutableDictionary, NSString;
@protocol HMFLogging;



@interface HMDAccessCodeDemoDataMocker : HMFObject <HMFLogging>



@property (readonly) NSMutableDictionary *accessCodes; // ivar: _accessCodes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_controlResponseForReadRequest:(id)arg0 ;
-(id)_controlResponseForWriteRequest:(id)arg0 ;
-(id)_handleAddRequest:(id)arg0 ;
-(id)_handleListRequest;
-(id)_handleReadRequest:(id)arg0 ;
-(id)_handleRemoveRequest:(id)arg0 ;
-(id)_handleUpdateRequest:(id)arg0 ;
-(id)handleReadRequests:(id)arg0 ;
-(id)handleWriteRequests:(id)arg0 ;
-(id)init;


@end


#endif