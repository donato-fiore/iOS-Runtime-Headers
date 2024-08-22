// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCICONOFFERMETADATA_H
#define ASCICONOFFERMETADATA_H

@class NSString;


#import "ASCOfferMetadata.h"

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *animationName; // ivar: _animationName
@property (readonly, copy, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIcon;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageName:(id)arg0 animationName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif