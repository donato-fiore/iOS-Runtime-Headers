// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMATTERREQUESTHANDLER_H
#define HMMATTERREQUESTHANDLER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface HMMatterRequestHandler : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)configureAccessoryWithName:(id)arg0 room:(id)arg1 completion:(id)arg2 ;
-(void)fetchRoomsInHome:(id)arg0 completion:(id)arg1 ;
-(void)pairAccessoryInHome:(id)arg0 onboardingPayload:(id)arg1 completion:(id)arg2 ;


@end


#endif