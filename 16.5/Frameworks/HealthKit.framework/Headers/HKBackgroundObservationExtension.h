// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKBACKGROUNDOBSERVATIONEXTENSION_H
#define HKBACKGROUNDOBSERVATIONEXTENSION_H

@class NSString;
@protocol NSExtensionRequestHandling;

#import <Foundation/Foundation.h>


@interface HKBackgroundObservationExtension : NSObject <NSExtensionRequestHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)backgroundObservationExtensionTimeWillExpire;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)didReceiveUpdateForSampleType:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif