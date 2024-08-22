// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKAPRICOTTRITIUMCOMPLICATIONPROVIDER_H
#define NTKAPRICOTTRITIUMCOMPLICATIONPROVIDER_H


#import <Foundation/Foundation.h>

#import "NTKCompanionApricotComplicationManager.h"

@interface NTKApricotTritiumComplicationProvider : NSObject {
    NTKCompanionApricotComplicationManager *_companionManager;
}




+(id)shared;
-(BOOL)vendorExistsWithContainerBundleIdentifier:(id)arg0 ;
-(id)_init;


@end


#endif