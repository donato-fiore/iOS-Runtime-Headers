// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWSTARTCOLLABORATIONACTIONRESPONSE_H
#define _SWSTARTCOLLABORATIONACTIONRESPONSE_H

@class SWActionResponse, NSURL;
@protocol NSSecureCoding, NSCopying;


#import "SWCollaborationMetadata.h"
#import "_SWCollaborationMetadata.h"

@interface _SWStartCollaborationActionResponse : SWActionResponse <NSSecureCoding, NSCopying>

 {
    SWCollaborationMetadata *_updatedMetadata;
}


@property (readonly, nonatomic) _SWCollaborationMetadata *updatedMetadata;
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)responseWithURL:(id)arg0 updatedMetadata:(id)arg1 ;
-(BOOL)isEqualToActionResponse:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestinationResponse:(id)arg0 ;
-(id)initWithURL:(id)arg0 updatedMetadata:(id)arg1 ;
-(void)encodeWithBSActionResponseSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif