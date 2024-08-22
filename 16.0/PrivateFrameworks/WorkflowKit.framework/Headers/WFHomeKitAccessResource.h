// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHOMEKITACCESSRESOURCE_H
#define WFHOMEKITACCESSRESOURCE_H

@class NSString;
@protocol WFHomeManagerEventObserver;


#import "WFAccessResource.h"

@interface WFHomeKitAccessResource : WFAccessResource <WFHomeManagerEventObserver>



@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSystemResource;
-(NSUInteger)status;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(void)homeManagerDidUpdateHomes:(id)arg0 ;
-(void)makeAvailableWithUserInterface:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif