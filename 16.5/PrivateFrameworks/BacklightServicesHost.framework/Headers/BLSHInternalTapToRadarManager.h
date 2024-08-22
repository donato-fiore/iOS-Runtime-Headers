// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINTERNALTAPTORADARMANAGER_H
#define BLSHINTERNALTAPTORADARMANAGER_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "BLSHInternalTapToRadarDialog.h"

@interface BLSHInternalTapToRadarManager : NSObject {
    BLSHInternalTapToRadarDialog *_ttrDialog;
    NSObject<OS_os_log> *_log;
}




+(id)sharedTapToRadarManager;
-(id)_init;
-(id)init;
-(void)requestTapToRadar:(id)arg0 log:(id)arg1 completion:(id)arg2 ;


@end


#endif