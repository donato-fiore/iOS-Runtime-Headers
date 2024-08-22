// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDWORKSPACESTATE_H
#define DBDASHBOARDWORKSPACESTATE_H

@class NSString;
@protocol DBWorkspaceState, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "DBDashboardEntity.h"

@interface DBDashboardWorkspaceState : NSObject <DBWorkspaceState, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) NSString *activeBundleIdentifier;
@property (readonly, nonatomic) DBDashboardEntity *baseEntity; // ivar: _baseEntity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) DBDashboardEntity *stackedEntity; // ivar: _stackedEntity
@property (readonly) Class superclass;


-(id)_bundleIdentifierFromEntity:(id)arg0 ;
-(id)_initWithState:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif