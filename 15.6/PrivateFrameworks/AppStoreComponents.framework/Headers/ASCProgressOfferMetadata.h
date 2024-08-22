// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCPROGRESSOFFERMETADATA_H
#define ASCPROGRESSOFFERMETADATA_H



#import "ASCOfferMetadata.h"

@interface ASCProgressOfferMetadata : ASCOfferMetadata

@property (nonatomic, getter=isIndeterminate) BOOL indeterminate; // ivar: _indeterminate
@property (readonly, nonatomic) CGFloat percent; // ivar: _percent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isProgress;
-(NSUInteger)hash;
-(id)description;
-(id)initIndeterminate;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPercent:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif