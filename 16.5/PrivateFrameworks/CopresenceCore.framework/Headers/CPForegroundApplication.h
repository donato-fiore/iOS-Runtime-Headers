// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPFOREGROUNDAPPLICATION_H
#define CPFOREGROUNDAPPLICATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CPForegroundApplication : NSObject {
    ? bundleIdentifier;
    ? featureFlags;
}


@property (nonatomic, readonly) NSInteger applicationType; // ivar: applicationType
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) BOOL isGameCenterApplication;
@property (nonatomic, readonly) NSString *localizedApplicationName;


-(id)init;


@end


#endif