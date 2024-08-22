// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSUBCREDENTIALPROVISIONINGSESSIONOPERATION_H
#define PKSUBCREDENTIALPROVISIONINGSESSIONOPERATION_H

@class NSString;
@protocol PKSessionDelegate;


#import "PKSubcredentialProvisioningOperation.h"

@interface PKSubcredentialProvisioningSessionOperation : PKSubcredentialProvisioningOperation <PKSessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)session:(id)arg0 didChangeState:(NSUInteger)arg1 ;


@end


#endif