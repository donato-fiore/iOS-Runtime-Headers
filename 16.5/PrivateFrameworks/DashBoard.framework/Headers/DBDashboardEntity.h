// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDENTITY_H
#define DBDASHBOARDENTITY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "DBDashboardWorkspaceStateChangeItem.h"

@interface DBDashboardEntity : NSObject <NSCopying>



@property (retain, nonatomic, setter=_setSR_associatedChangeItem:) DBDashboardWorkspaceStateChangeItem *_sr_associatedChangeItem;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isApplicationEntity;
-(BOOL)isFullScreenEntity;
-(BOOL)isHomescreenEntity;
-(BOOL)isProxiedApplicationEntity;
-(BOOL)isSiriEntity;
-(id)_initWithIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)_buildDescriptionWithBuilder:(id)arg0 ;


@end


#endif