// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSSELECTIONFIELDDETECTORCOORDINATOR_H
#define NPKPASSSELECTIONFIELDDETECTORCOORDINATOR_H

@class NSString;
@protocol NPKPassSelectionFieldDetectorManagerDelegate, NPKPassSelectionFieldDetectorListener, NPKRemotePassSelectionFieldDetectorListenerCoordinator;

#import <Foundation/Foundation.h>

#import "NPKPassSelectionFieldDetectorListener.h"
#import "NPKPassSelectionFieldDetectorManager.h"

@interface NPKPassSelectionFieldDetectorCoordinator : NSObject <NPKPassSelectionFieldDetectorManagerDelegate>

 {
    NPKPassSelectionFieldDetectorListener *_localFieldDetectorListener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NPKPassSelectionFieldDetectorListener> *localFieldDetectorListener;
@property (readonly, nonatomic) NPKPassSelectionFieldDetectorManager *passSelectionFieldDetectorManager; // ivar: _passSelectionFieldDetectorManager
@property (readonly, nonatomic) NSObject<NPKRemotePassSelectionFieldDetectorListenerCoordinator> *remoteFieldDetectListenerCoordinator; // ivar: _remoteFieldDetectListenerCoordinator
@property (readonly) Class superclass;


-(id)initWithNPKPassSelectionFieldDetectorManager:(id)arg0 remoteFieldDetectListenerCoordinator:(id)arg1 ;
-(void)passSelectionFieldDetectManager:(id)arg0 didEnterFieldForPassWithUniqueID:(id)arg1 ;


@end


#endif