// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) MPAVRoute *leader; // ivar: _leader
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) MPAVRoute *mainRoute;
@property (readonly, nonatomic) NSArray *routes; // ivar: _routes
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)itemWithActionTitle:(id)arg0 subtitle:(id)arg1 enabled:(BOOL)arg2 identifier:(id)arg3 image:(id)arg4 ;
+(id)itemWithLeader:(id)arg0 members:(id)arg1 ;
+(id)itemWithRoute:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_stateDumpObject;


@end


#endif