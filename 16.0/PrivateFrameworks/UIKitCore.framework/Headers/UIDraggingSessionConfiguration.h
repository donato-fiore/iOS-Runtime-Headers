// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDRAGGINGSESSIONCONFIGURATION_H
#define UIDRAGGINGSESSIONCONFIGURATION_H

@class NSXPCListenerEndpoint, NSString, PBItemCollection, NSIndexSet, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIDraggingSystemTouchRoutingPolicy.h"

@interface UIDraggingSessionConfiguration : NSObject <NSSecureCoding>



@property (nonatomic) CAPoint3D _initialCentroid; // ivar: _initialCentroid
@property (retain, nonatomic) NSXPCListenerEndpoint *axEndpoint; // ivar: _axEndpoint
@property (nonatomic) unsigned int coordinateSpaceSourceContextID; // ivar: _coordinateSpaceSourceContextID
@property (nonatomic) NSUInteger coordinateSpaceSourceLayerRenderID; // ivar: _coordinateSpaceSourceLayerRenderID
@property (retain, nonatomic) NSXPCListenerEndpoint *dataProviderEndpoint; // ivar: _dataProviderEndpoint
@property (retain, nonatomic) NSString *displayIdentifier; // ivar: _displayIdentifier
@property (nonatomic) CGPoint initialCentroid;
@property (nonatomic) BOOL initiatedWithPointer; // ivar: _initiatedWithPointer
@property (retain, nonatomic) PBItemCollection *itemCollection; // ivar: _itemCollection
@property (retain, nonatomic) NSIndexSet *preferredPreviewIndexes; // ivar: _preferredPreviewIndexes
@property (retain, nonatomic) UIDraggingSystemTouchRoutingPolicy *routingPolicy; // ivar: _routingPolicy
@property (retain, nonatomic) NSString *sceneIdentifier; // ivar: _sceneIdentifier
@property (nonatomic) BOOL supportsSystemDrag; // ivar: _supportsSystemDrag
@property (retain, nonatomic) NSArray *touchIDs; // ivar: _touchIDs


+(BOOL)supportsSecureCoding;
+(id)configurationWithItemCollection:(id)arg0 dataProviderEndpoint:(id)arg1 initialCentroidInSourceWindow:(struct CAPoint3D )arg2 sourceView:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif