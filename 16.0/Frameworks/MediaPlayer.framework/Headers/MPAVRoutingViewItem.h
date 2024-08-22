// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPAVROUTINGVIEWITEM_H
#define MPAVROUTINGVIEWITEM_H

@class NSString, UIImage, NSArray;
@protocol NSObject;

#import <Foundation/Foundation.h>

#import "MPAVRoute.h"

@interface MPAVRoutingViewItem : NSObject <NSObject>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic, getter=isExpandable) BOOL expandable;
@property (nonatomic, getter=isExpanded) BOOL expanded; // ivar: _expanded
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) MPAVRoute *leader; // ivar: _leader
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) MPAVRoute *mainRoute;
@property (nonatomic, getter=isNearby) BOOL nearby; // ivar: _nearby
@property (readonly, nonatomic) NSUInteger nestedLevel;
@property (readonly, nonatomic, getter=isPickable) BOOL pickable;
@property (readonly, nonatomic) NSArray *routes; // ivar: _routes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *vendorSpecificCustomRowIdentifier; // ivar: _vendorSpecificCustomRowIdentifier


+(id)itemWithActionTitle:(id)arg0 subtitle:(id)arg1 enabled:(BOOL)arg2 identifier:(id)arg3 image:(id)arg4 ;
+(id)itemWithLeader:(id)arg0 members:(id)arg1 ;
+(id)itemWithRoute:(id)arg0 ;
+(id)itemWithVendorSpecificCustomRowTitle:(id)arg0 icon:(id)arg1 identifier:(id)arg2 ;
+(id)itemWithVendorSpecificRoute:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_stateDumpObject;


@end


#endif