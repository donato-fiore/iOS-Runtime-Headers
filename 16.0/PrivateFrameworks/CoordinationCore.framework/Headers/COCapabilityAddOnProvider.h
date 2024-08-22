// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COCAPABILITYADDONPROVIDER_H
#define COCAPABILITYADDONPROVIDER_H

@class NSString;
@protocol COServiceAddOnProvider;

#import <Foundation/Foundation.h>


@interface COCapabilityAddOnProvider : NSObject <COServiceAddOnProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)serviceAddOn;


@end


#endif