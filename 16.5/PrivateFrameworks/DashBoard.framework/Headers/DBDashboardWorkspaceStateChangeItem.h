// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBDASHBOARDWORKSPACESTATECHANGEITEM_H
#define DBDASHBOARDWORKSPACESTATECHANGEITEM_H

@class NSString;
@protocol DBWorkspaceStateChangeItem;

#import <Foundation/Foundation.h>


@interface DBDashboardWorkspaceStateChangeItem : NSObject <DBWorkspaceStateChangeItem>



@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL prefersAnimation;
@property (nonatomic) NSUInteger presentationPreference; // ivar: _presentationPreference
@property (readonly) Class superclass;


-(id)_init;
-(id)_newEntityFromChangeItemWithPolicyProvider:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)_buildDescriptionWithBuilder:(id)arg0 ;


@end


#endif