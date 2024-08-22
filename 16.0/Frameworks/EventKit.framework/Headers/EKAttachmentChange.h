// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKATTACHMENTCHANGE_H
#define EKATTACHMENTCHANGE_H

@class NSString;
@protocol EKOwnerIDProviding;


#import "EKObjectChange.h"
#import "EKObjectID.h"

@interface EKAttachmentChange : EKObjectChange <EKOwnerIDProviding>



@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) EKObjectID *ownerID; // ivar: _ownerID
@property (readonly, nonatomic) NSString *uuid; // ivar: _uuid


+(int)entityType;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif