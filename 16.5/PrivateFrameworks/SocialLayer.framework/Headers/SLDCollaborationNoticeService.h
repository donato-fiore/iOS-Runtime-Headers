// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCOLLABORATIONNOTICESERVICE_H
#define SLDCOLLABORATIONNOTICESERVICE_H

@class NSString;
@protocol SLDService, SLDCollaborationNoticeServiceProtocol;

#import <Foundation/Foundation.h>


@interface SLDCollaborationNoticeService : NSObject <SLDService, SLDCollaborationNoticeServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)_connShouldUnrestrictHighlightLookup:(id)arg0 ;
-(id)_applicationIdentifierForConnection:(id)arg0 ;
-(id)_handlesForAttributionIdentifiers:(id)arg0 appID:(id)arg1 ;
-(void)_send:(id)arg0 forAttributionIdentifiers:(id)arg1 reply:(id)arg2 ;
-(void)_sendClearNoticesTransmission:(id)arg0 forAttributionIdentifiers:(id)arg1 reply:(id)arg2 ;
-(void)sendClearNoticesFor:(id)arg0 forAttributionIdentifiers:(id)arg1 reply:(id)arg2 ;
-(void)sendHighlightEventData:(id)arg0 eventType:(NSInteger)arg1 forAttributionIdentifiers:(id)arg2 reply:(id)arg3 ;


@end


#endif