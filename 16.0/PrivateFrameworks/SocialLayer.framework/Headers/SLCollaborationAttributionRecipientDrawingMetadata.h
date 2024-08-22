// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLCOLLABORATIONATTRIBUTIONRECIPIENTDRAWINGMETADATA_H
#define SLCOLLABORATIONATTRIBUTIONRECIPIENTDRAWINGMETADATA_H

@class CNContact, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLCollaborationAttributionRecipientDrawingMetadata : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, nonatomic) NSData *contactImageData; // ivar: _contactImageData


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContact:(id)arg0 contactImageData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif