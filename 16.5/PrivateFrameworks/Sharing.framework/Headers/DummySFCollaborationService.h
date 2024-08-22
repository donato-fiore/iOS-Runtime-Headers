// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DUMMYSFCOLLABORATIONSERVICE_H
#define DUMMYSFCOLLABORATIONSERVICE_H

@class NSString;
@protocol SFCollaborationService;

#import <Foundation/Foundation.h>


@interface DummySFCollaborationService : NSObject <SFCollaborationService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)requestDefaultShareModeCollaborationForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif