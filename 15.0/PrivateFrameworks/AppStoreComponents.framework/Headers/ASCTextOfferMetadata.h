// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCTEXTOFFERMETADATA_H
#define ASCTEXTOFFERMETADATA_H

@class NSString;


#import "ASCOfferMetadata.h"

@interface ASCTextOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isText;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif