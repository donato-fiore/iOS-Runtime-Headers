// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYSYNCSTATEOBSERVEREXPORTEDOBJECT_H
#define PSYSYNCSTATEOBSERVEREXPORTEDOBJECT_H

@class NSString;
@protocol PSYSyncStateObserverInterface;

#import <Foundation/Foundation.h>


@interface PSYSyncStateObserverExportedObject : NSObject <PSYSyncStateObserverInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSYSyncStateObserverInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)didUpdateSyncForPairingID:(id)arg0 ;


@end


#endif