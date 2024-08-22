// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APROTATIONREQUESTOR_H
#define APROTATIONREQUESTOR_H

@class NSString;
@protocol APRotateXPC;


#import "APXPCActionRequester.h"

@interface APRotationRequestor : APXPCActionRequester <APRotateXPC>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canShareConnection;
+(id)machService;
-(id)remoteObjectInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)rotate:(id)arg0 ;


@end


#endif