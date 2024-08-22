// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACAPPLICATIONUTILITIES_H
#define CACAPPLICATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface CACApplicationUtilities : NSObject



+(id)installedApplications;
+(id)runningApplications;
+(id)targetApplications;
+(void)launchApplicationWithIdentifier:(id)arg0 ;


@end


#endif