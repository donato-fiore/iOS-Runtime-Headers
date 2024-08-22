// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSPERSONALIZATIONIMAGESET_H
#define PKPASSPERSONALIZATIONIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassPersonalizationImageSet : PKPassImageSet

@property (retain, nonatomic) PKImage *logoImage; // ivar: _logoImage


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