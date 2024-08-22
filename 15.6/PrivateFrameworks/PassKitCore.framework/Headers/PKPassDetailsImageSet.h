// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSDETAILSIMAGESET_H
#define PKPASSDETAILSIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassDetailsImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *cardHolderPicture; // ivar: _cardHolderPicture


+(BOOL)shouldCache;
+(BOOL)supportsSecureCoding;
+(NSInteger)imageSetType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif