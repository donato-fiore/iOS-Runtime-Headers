// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSDEVICEIDENTIFIERMANAGER_H
#define _LSDEVICEIDENTIFIERMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _LSDeviceIdentifierManager : NSObject {
    NSMutableDictionary *_sharedCaches;
}




+(id)sharedInstance;
-(id)cacheForPersona:(id)arg0 ;
-(id)init;


@end


#endif