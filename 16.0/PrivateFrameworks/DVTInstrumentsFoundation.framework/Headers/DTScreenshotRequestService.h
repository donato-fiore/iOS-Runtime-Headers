// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTSCREENSHOTREQUESTSERVICE_H
#define DTSCREENSHOTREQUESTSERVICE_H

@class DTXService, NSString;
@protocol DTScreenshotRequestServiceAPI;



@interface DTScreenshotRequestService : DTXService <DTScreenshotRequestServiceAPI>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 ;
-(id)_screenshotServiceRequestWithError:(*id)arg0 ;
-(id)_screenshotWithError:(*id)arg0 ;
-(id)takeScreenshot;


@end


#endif