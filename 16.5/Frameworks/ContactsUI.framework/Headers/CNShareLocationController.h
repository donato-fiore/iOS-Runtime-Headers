// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNSHARELOCATIONCONTROLLER_H
#define CNSHARELOCATIONCONTROLLER_H

@class CNFuture, CNContact, NSString, FMFSession, NSSet, CNUIIDSAvailabilityProvider;
@protocol FMFSessionDelegate, CNCancelable, CNSchedulerProvider, CNShareLocationProtocol;

#import <Foundation/Foundation.h>


@interface CNShareLocationController : NSObject <FMFSessionDelegate>



@property (retain, nonatomic) NSObject<CNCancelable> *bestPropertyCancelable; // ivar: _bestPropertyCancelable
@property (retain, nonatomic) CNFuture *bestPropertyFuture; // ivar: _bestPropertyFuture
@property (readonly, nonatomic) BOOL canShare;
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession
@property (retain, nonatomic) NSSet *handles; // ivar: _handles
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // ivar: _idsAvailabilityProvider
@property (readonly, nonatomic) BOOL isSharing;
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (weak, nonatomic) NSObject<CNShareLocationProtocol> *shareLocationDelegate; // ivar: _shareLocationDelegate
@property (readonly) Class superclass;


+(id)fmfHandleFromContactProperty:(id)arg0 ;
+(id)fmfHandlesFromContact:(id)arg0 ;
-(id)actionsMenuProvider:(SEL)arg0 ;
-(id)callerID:(*id)arg0 ;
-(id)callerIDFuture;
-(id)endOfDayDate;
-(id)initWithIDSAvailabilityProvider:(id)arg0 ;
-(id)initWithIDSAvailabilityProvider:(id)arg0 fmfSession:(id)arg1 schedulerProvider:(id)arg2 ;
-(void)initiateIDSRequest;
-(void)notifySharingStatusDidChange;
-(void)perform:(id)arg0 ;
-(void)shareLocationUntilEndDate:(id)arg0 ;
-(void)stopSharingLocation;


@end


#endif