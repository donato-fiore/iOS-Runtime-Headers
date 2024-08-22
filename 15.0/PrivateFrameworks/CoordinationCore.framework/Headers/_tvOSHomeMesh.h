// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVOSHOMEMESH_H
#define _TVOSHOMEMESH_H

@protocol COServiceListenerProvider;

#import <Foundation/Foundation.h>

#import "COHomeKitAdapter.h"
#import "COMeshController.h"
#import "COStateService.h"

@interface _tvOSHomeMesh : NSObject

@property (readonly, nonatomic) COHomeKitAdapter *homeKitAdapter; // ivar: _homeKitAdapter
@property (readonly, nonatomic) COMeshController *mesh; // ivar: _mesh
@property (readonly, nonatomic) NSObject<COServiceListenerProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) COStateService *stateService; // ivar: _stateService


+(id)homeMeshWithHomeIdentifier:(id)arg0 ;
-(id)initWithHomeIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif