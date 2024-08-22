// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRORIGINWRAPPER_H
#define _TVRCMRORIGINWRAPPER_H

@protocol _TVRCMROriginDelegate;

#import <Foundation/Foundation.h>


@interface _TVRCMROriginWrapper : NSObject {
    *void _origin;
    BOOL _isObserving;
}


@property (weak, nonatomic) NSObject<_TVRCMROriginDelegate> *delegate; // ivar: _delegate


-(BOOL)isEqualToOriginRef:(*void)arg0 ;
-(id)initWithOrigin:(*void)arg0 ;
-(void)_fetchAndReportSupportedCommands;
-(void)_supportedCommandsChanged:(id)arg0 ;
-(void)dealloc;
-(void)endObservingUpdates;
-(void)getPickedRouteHasVolumeControl:(id)arg0 ;
-(void)getSupportedCommands:(id)arg0 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 ;
-(void)startObservingUpdates;


@end


#endif