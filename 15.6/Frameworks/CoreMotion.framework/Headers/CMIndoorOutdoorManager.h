// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMINDOOROUTDOORMANAGER_H
#define CMINDOOROUTDOORMANAGER_H

@protocol CMIndoorOutdoorDelegate;

#import <Foundation/Foundation.h>

#import "CMIndoorOutdoorManagerInternal.h"

@interface CMIndoorOutdoorManager : NSObject {
    CMIndoorOutdoorManagerInternal *_internal;
}


@property (weak, nonatomic) NSObject<CMIndoorOutdoorDelegate> *delegate; // ivar: _delegate


+(BOOL)isIndoorOutdoorStateAvailable;
-(id)init;
-(void)dealloc;
-(void)lastKnownIndoorOutdoorStateWithHandler:(id)arg0 ;
-(void)startIndoorOutdoorUpdates;
-(void)stopIndoorOutdoorUpdates;


@end


#endif