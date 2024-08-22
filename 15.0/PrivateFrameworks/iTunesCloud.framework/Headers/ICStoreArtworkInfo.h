// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICSTOREARTWORKINFO_H
#define ICSTOREARTWORKINFO_H

@class NSURL, NSArray, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ICStoreArtworkSizeInfo.h"

@interface ICStoreArtworkInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *artworkURL; // ivar: _artworkURL
@property (readonly, nonatomic) NSUInteger imageTraits;
@property (readonly, nonatomic) CGSize originalSize;
@property (readonly, copy, nonatomic) NSArray *responseArray; // ivar: _responseArray
@property (readonly, copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (readonly, nonatomic) ICStoreArtworkSizeInfo *sizeInfo; // ivar: _sizeInfo
@property (copy, nonatomic) NSArray *sortedResponseArray; // ivar: _sortedResponseArray
@property (copy, nonatomic) NSArray *sortedSupportedSizesArray; // ivar: _sortedSupportedSizesArray
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly, nonatomic) NSArray *textGradient;


+(BOOL)supportsSecureCoding;
-(BOOL)_hasOriginalSize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)artworkURLWithSize:(struct CGSize )arg0 cropStyle:(id)arg1 format:(id)arg2 ;
-(id)artworkURLWithSize:(struct CGSize )arg0 cropStyle:(id)arg1 format:(id)arg2 preferP3ColorSpace:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArtworkResponseArray:(id)arg0 ;
-(id)initWithArtworkResponseDictionary:(id)arg0 ;
-(id)initWithArtworkResponseValue:(id)arg0 ;
-(id)initWithArtworkURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(struct CGColor *)colorFromStringRepresentation:(id)arg0 ;
-(struct CGColor *)copyColorWithKind:(id)arg0 ;
-(void)_sortResponseArray;
-(void)_sortSupportedSizesArray;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif