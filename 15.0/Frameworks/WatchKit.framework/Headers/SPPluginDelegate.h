// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPPLUGINDELEGATE_H
#define SPPLUGINDELEGATE_H

@class NSString;
@protocol PKServiceDelegate;

#import <Foundation/Foundation.h>


@interface SPPluginDelegate : NSObject <PKServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)rootObjectForPlugIn:(id)arg0 ;


@end


#endif