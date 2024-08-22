// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSPHISHINGURLCLASSIFIERCONFIGURATIONOVERRIDEADAPTER_H
#define WBSPHISHINGURLCLASSIFIERCONFIGURATIONOVERRIDEADAPTER_H

@protocol WBSPhishingURLClassifier;

#import <Foundation/Foundation.h>

#import "WBSPhishingConfiguration.h"

@interface WBSPhishingURLClassifierConfigurationOverrideAdapter : NSObject <WBSPhishingURLClassifier>



@property (retain) WBSPhishingConfiguration *configuration; // ivar: _configuration


-(void)classifyURL:(id)arg0 options:(NSUInteger)arg1 completionHandler:(id)arg2 ;


@end


#endif