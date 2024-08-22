// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SECESCROWREQUEST_H
#define SECESCROWREQUEST_H

@class NSXPCConnection, NSString;
@protocol SecEscrowRequestable;

#import <Foundation/Foundation.h>


@interface SecEscrowRequest : NSObject <SecEscrowRequestable>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)request:(*id)arg0 ;
-(BOOL)cachePrerecord:(id)arg0 serializedPrerecord:(id)arg1 error:(*id)arg2 ;
-(BOOL)escrowCompletedWithinLastSeconds:(CGFloat)arg0 ;
-(BOOL)pendingEscrowUpload:(*id)arg0 ;
-(BOOL)resetAllRequests:(*id)arg0 ;
-(BOOL)triggerEscrowUpdate:(id)arg0 error:(*id)arg1 ;
-(BOOL)triggerEscrowUpdate:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)storePrerecordsInEscrow:(*id)arg0 ;
-(id)fetchPrerecord:(id)arg0 error:(*id)arg1 ;
-(id)fetchRequestWaitingOnPasscode:(*id)arg0 ;
-(id)fetchStatuses:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif