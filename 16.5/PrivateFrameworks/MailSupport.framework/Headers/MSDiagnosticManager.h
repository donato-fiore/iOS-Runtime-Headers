// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSDIAGNOSTICMANAGER_H
#define MSDIAGNOSTICMANAGER_H

@class AWDServerConnection, NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>


@interface MSDiagnosticManager : NSObject <EFLoggable>



@property (readonly, nonatomic) AWDServerConnection *awdServerConnection; // ivar: _awdServerConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)submitWithIdentifier:(unsigned int)arg0 metricGenerator:(id)arg1 ;
-(id)init;
-(void)submitComposeAttachmentReport:(id)arg0 ;
-(void)submitFetchMetricsReport:(id)arg0 ;
-(void)submitMessageLoadingReport:(id)arg0 ;
-(void)submitSearchSessionWithSearchEngagement:(id)arg0 numberOfMessagesLeftToIndex:(NSUInteger)arg1 percentOfMessagesIndexed:(NSUInteger)arg2 emailProvider:(int)arg3 ;


@end


#endif