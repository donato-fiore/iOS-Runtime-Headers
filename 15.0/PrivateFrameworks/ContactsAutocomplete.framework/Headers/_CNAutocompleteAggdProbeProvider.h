// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CNAUTOCOMPLETEAGGDPROBEPROVIDER_H
#define _CNAUTOCOMPLETEAGGDPROBEPROVIDER_H

@class NSString;
@protocol CNAutocompleteProbeProvider;

#import <Foundation/Foundation.h>


@interface _CNAutocompleteAggdProbeProvider : NSObject <CNAutocompleteProbeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)performanceProbe;
-(id)suggestionsProbe;
-(id)usageMonitorProbe;


@end


#endif