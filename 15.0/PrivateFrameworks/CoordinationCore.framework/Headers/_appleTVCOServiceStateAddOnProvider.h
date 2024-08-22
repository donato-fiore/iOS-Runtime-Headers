// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _APPLETVCOSERVICESTATEADDONPROVIDER_H
#define _APPLETVCOSERVICESTATEADDONPROVIDER_H

@class NSString;
@protocol COServiceAddOnProvider;

#import <Foundation/Foundation.h>


@interface _appleTVCOServiceStateAddOnProvider : NSObject <COServiceAddOnProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)serviceAddOn;


@end


#endif