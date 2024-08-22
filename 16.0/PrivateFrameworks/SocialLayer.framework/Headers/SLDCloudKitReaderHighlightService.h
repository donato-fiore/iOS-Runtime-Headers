// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCLOUDKITREADERHIGHLIGHTSERVICE_H
#define SLDCLOUDKITREADERHIGHLIGHTSERVICE_H

@class NSString;
@protocol SLDService, SLDCloudKitReaderHighlightService;

#import <Foundation/Foundation.h>


@interface SLDCloudKitReaderHighlightService : NSObject <SLDService, SLDCloudKitReaderHighlightService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
+(void)setupInterface:(id)arg0 ;
-(id)applicationIdentifierForCurrentConnection;
-(void)addApplicationIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)lostConnection:(id)arg0 ;
-(void)receivedConnection:(id)arg0 ;
-(void)syncableSocialHighlightsForApplicationIdentifier:(id)arg0 reply:(id)arg1 ;


@end


#endif