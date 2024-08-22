// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSTORYANALYTICSUSAGEDESTINATION_H
#define PXSTORYANALYTICSUSAGEDESTINATION_H

@class NSMutableDictionary, NSString;
@protocol CPAnalyticsDestinationProtocol;

#import <Foundation/Foundation.h>


@interface PXStoryAnalyticsUsageDestination : NSObject <CPAnalyticsDestinationProtocol>

 {
    NSMutableDictionary *_sessionInfosByIdentifier;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_createDefaultPayloadForInfo:(id)arg0 ;
-(id)_createInfoForEvent:(id)arg0 ;
-(id)_existingInfoForEvent:(id)arg0 ;
-(id)_existingInfoForEvent:(id)arg0 pop:(BOOL)arg1 ;
-(id)_popInfoForEndEvent:(id)arg0 ;
-(id)init;
-(void)_enumerateExistingInfosUsingBlock:(id)arg0 ;
-(void)_sendSummaryEventsForInfo:(id)arg0 ;
-(void)processEvent:(id)arg0 ;


@end


#endif