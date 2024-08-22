// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSPMAPSINSTALLSTATE_H
#define MSPMAPSINSTALLSTATE_H

@class GEOObserverHashTable;

#import <Foundation/Foundation.h>


@interface MSPMapsInstallState : NSObject {
    GEOObserverHashTable *_installStateObservers;
    BOOL _mapsInstalled;
    BOOL _hasState;
}




+(BOOL)isMapsAppInstalled;
+(id)sharedState;
+(void)setRunningInsideMapsApp;
-(BOOL)_fetchMapsAppInstallState;
-(BOOL)_isMapsAppInstalled;
-(id)init;
-(void)dealloc;
-(void)receivedChangeNotification:(id)arg0 ;
-(void)registerMapsInstallStateObserver:(id)arg0 ;
-(void)unregisterMapsInstallStateObserver:(id)arg0 ;


@end


#endif