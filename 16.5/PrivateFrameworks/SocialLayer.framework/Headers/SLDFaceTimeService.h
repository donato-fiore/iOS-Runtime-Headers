// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDFACETIMESERVICE_H
#define SLDFACETIMESERVICE_H

@class NSString;
@protocol SLDService, SLDFaceTimeServiceProtocol;

#import <Foundation/Foundation.h>


@interface SLDFaceTimeService : NSObject <SLDService, SLDFaceTimeServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(void)initiateTUConversationForAttributionIdentifier:(id)arg0 videoEnabled:(BOOL)arg1 completion:(id)arg2 ;
-(void)refreshShareableContentMetadataInJoinedConversation;


@end


#endif