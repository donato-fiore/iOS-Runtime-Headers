// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFOUTGOINGHOMEINVITATIONITEM_H
#define HFOUTGOINGHOMEINVITATIONITEM_H

@class NSString, HMOutgoingHomeInvitation;
@protocol HFHomeKitItemProtocol, NSCopying, HFHomeKitObject;


#import "HFItem.h"

@interface HFOutgoingHomeInvitationItem : HFItem <HFHomeKitItemProtocol, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMOutgoingHomeInvitation *outgoingInvitation; // ivar: _outgoingInvitation
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOutgoingInvitation:(id)arg0 ;


@end


#endif