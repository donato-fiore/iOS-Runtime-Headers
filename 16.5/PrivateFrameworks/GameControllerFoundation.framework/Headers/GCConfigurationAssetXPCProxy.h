// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GCCONFIGURATIONASSETXPCPROXY_H
#define GCCONFIGURATIONASSETXPCPROXY_H

@class NSString;
@protocol GCConfigurationAsset, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "GCVersion.h"

@interface GCConfigurationAssetXPCProxy : NSObject <GCConfigurationAsset, NSSecureCoding>



@property (readonly) NSString *assetId; // ivar: _assetId
@property (readonly) NSString *assetState; // ivar: _assetState
@property (readonly) GCVersion *compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly) NSInteger contentRevision; // ivar: _contentRevision
@property (readonly) GCVersion *contentVersion; // ivar: _contentVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif