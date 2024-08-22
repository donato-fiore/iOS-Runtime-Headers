// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COCLUSTER_H
#define COCLUSTER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "COClusterConfiguration.h"

@interface COCluster : NSObject <NSCopying, NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) COClusterConfiguration *configuration; // ivar: _configuration
@property (readonly, copy, nonatomic) NSString *format; // ivar: _format
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label
@property (readonly, copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (readonly, nonatomic) BOOL updateHandlerInvoked; // ivar: _updateHandlerInvoked


+(BOOL)supportsSecureCoding;
+(id)_allowedClusterClasses;
+(id)_clusterForCluster:(id)arg0 ;
+(id)_createTemplateFromConfiguration:(id)arg0 ;
+(id)activityGroupCluster;
+(id)clusterNameWithHomeKitHome:(id)arg0 ;
+(id)clusterWithConfiguration:(id)arg0 ;
+(id)dynamicGroupCluster;
+(id)groupCluster;
+(id)homeCluster;
+(id)homeClusterForHomeKitHome:(id)arg0 ;
+(id)inferClusterLabelFromCluster:(id)arg0 ;
+(id)pairCluster;
+(id)roomCluster;
+(id)zoneCluster;
-(BOOL)_isEqualToCluster:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithConfiguration:(id)arg0 format:(id)arg1 label:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)_handleRealmUpdate:(id)arg0 ;
-(void)_invokeUpdateHandler;
-(void)_updateIdentifier;
-(void)_withLock:(id)arg0 ;
-(void)activate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif