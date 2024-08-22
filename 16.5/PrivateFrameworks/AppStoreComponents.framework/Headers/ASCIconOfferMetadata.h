// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCICONOFFERMETADATA_H
#define ASCICONOFFERMETADATA_H

@class NSString;


#import "ASCOfferMetadata.h"

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *animationName; // ivar: _animationName
@property (readonly, copy, nonatomic) NSString *baseImageName; // ivar: _baseImageName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIcon;
-(NSUInteger)hash;
-(id)description;
-(id)imageNameForSize:(id)arg0 ;
-(id)initWithBaseImageName:(id)arg0 animationName:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif