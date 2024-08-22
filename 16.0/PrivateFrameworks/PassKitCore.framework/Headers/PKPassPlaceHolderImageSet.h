// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSPLACEHOLDERIMAGESET_H
#define PKPASSPLACEHOLDERIMAGESET_H



#import "PKPassImageSet.h"
#import "PKImage.h"

@interface PKPassPlaceHolderImageSet : PKPassImageSet

@property (nonatomic) CGRect logoRect; // ivar: _logoRect
@property (retain, nonatomic) PKImage *placeHolderImage; // ivar: _placeHolderImage


+(BOOL)supportsSecureCoding;
+(NSInteger)imageSetType;
+(id)archiveName;
+(unsigned int)currentVersion;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 frontFaceImageSet:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayProfile:(id)arg0 fileURL:(id)arg1 screenScale:(CGFloat)arg2 suffix:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)preheatImages;


@end


#endif