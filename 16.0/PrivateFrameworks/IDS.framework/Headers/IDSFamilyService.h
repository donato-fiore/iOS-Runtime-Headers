// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSFAMILYSERVICE_H
#define IDSFAMILYSERVICE_H

@class NSMutableSet, NSString, NSDictionary, NSSet;
@protocol IDSDaemonListenerProtocol;


#import "IDSService.h"

@interface IDSFamilyService : IDSService <IDSDaemonListenerProtocol>

 {
    NSMutableSet *familyHandles;
    NSString *listenerID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dsidToDeviceList; // ivar: _dsidToDeviceList
@property (retain, nonatomic) NSDictionary *dsidToFamilyMember; // ivar: _dsidToFamilyMember
@property (retain, nonatomic) NSSet *familyMembers; // ivar: _familyMembers
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isValidDestination:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendData:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendMessage:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendProtobuf:(id)arg0 toDestinations:(id)arg1 priority:(NSInteger)arg2 options:(id)arg3 identifier:(*id)arg4 error:(*id)arg5 ;
-(BOOL)sendResourceAtURL:(id)arg0 metadata:(id)arg1 toDestinations:(id)arg2 priority:(NSInteger)arg3 options:(id)arg4 identifier:(*id)arg5 error:(*id)arg6 ;
-(id)familyHandles;
-(void)fetchFamilyMembersWithDevices:(id)arg0 ;
-(void)service:(id)arg0 familyInfoUpdated:(id)arg1 ;


@end


#endif