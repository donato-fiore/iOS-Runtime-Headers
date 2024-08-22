// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKVIRTUALCONFERENCEPROVIDER_H
#define EKVIRTUALCONFERENCEPROVIDER_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface EKVirtualConferenceProvider : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)extendExpirationOfURL:(id)arg0 toRequestedDate:(id)arg1 withCompletion:(id)arg2 ;
-(void)fetchAvailableRoomTypesWithCompletionHandler:(id)arg0 ;
-(void)fetchVirtualConferenceForIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)invalidateURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)isURLValid:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif