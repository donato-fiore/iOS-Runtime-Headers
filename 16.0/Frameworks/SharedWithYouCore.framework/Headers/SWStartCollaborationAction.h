// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSTARTCOLLABORATIONACTION_H
#define SWSTARTCOLLABORATIONACTION_H

@protocol NSSecureCoding, NSCopying;


#import "SWAction.h"
#import "SWCollaborationMetadata.h"

@interface SWStartCollaborationAction : SWAction <NSSecureCoding, NSCopying>



@property (retain, nonatomic) SWCollaborationMetadata *collaborationMetadata; // ivar: _collaborationMetadata


+(BOOL)supportsSecureCoding;
+(id)actionWithMetadata:(id)arg0 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationAction:(id)arg0 ;
-(id)initWithMetadata:(id)arg0 ;
-(void)encodeWithBSActionSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fulfillUsingURL:(id)arg0 collaborationIdentifier:(id)arg1 ;
-(void)fulfillUsingURL:(id)arg0 updatedMetadata:(id)arg1 ;


@end


#endif