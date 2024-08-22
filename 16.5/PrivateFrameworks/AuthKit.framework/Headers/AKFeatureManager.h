// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AKFEATUREMANAGER_H
#define AKFEATUREMANAGER_H


#import <Foundation/Foundation.h>


@interface AKFeatureManager : NSObject {
    BOOL _cachedIsLisbonAvailable;
}


@property (readonly, nonatomic, getter=isLisbonAvailable) BOOL lisbonAvailable;


+(id)sharedManager;
-(id)init;


@end


#endif