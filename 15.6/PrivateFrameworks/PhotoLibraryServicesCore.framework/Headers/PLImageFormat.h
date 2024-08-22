// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLIMAGEFORMAT_H
#define PLIMAGEFORMAT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLImageFormat : NSObject

@property (readonly, nonatomic) *__CFString colorSpaceName; // ivar: _colorSpaceName
@property (readonly, nonatomic) CGFloat dimension; // ivar: _dimension
@property (readonly, nonatomic) BOOL dimensionsReferToShortSide;
@property (nonatomic) unsigned short formatID; // ivar: _formatID
@property (readonly, nonatomic) NSInteger formatMode; // ivar: _formatMode
@property (readonly, nonatomic) BOOL isAlwaysFullScreen; // ivar: _isAlwaysFullScreen
@property (readonly, nonatomic) BOOL isCropped; // ivar: _isCropped
@property (readonly, nonatomic) BOOL isSquare;
@property (readonly, nonatomic) BOOL isTable;
@property (readonly, nonatomic) BOOL isThumbnail;
@property (readonly, nonatomic) NSUInteger metalPixelFormat; // ivar: _metalPixelFormat
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL refersToLatestVersion;
@property (readonly, nonatomic) BOOL refersToOriginalVersion;
@property (readonly, nonatomic) BOOL refersToPenultimateVersion;
@property (readonly, nonatomic) BOOL refersToUnadjustedVersion;
@property (readonly, nonatomic) CGSize size; // ivar: _size
@property (readonly, nonatomic) NSInteger thumbnailKind; // ivar: _thumbnailKind
@property (readonly, nonatomic) NSInteger version; // ivar: _version


+(id)_syncFormats;
+(id)formatWithID:(unsigned short)arg0 ;
-(BOOL)_canDegradeToFormat:(id)arg0 ;
-(BOOL)_isAcceptableForViewSize:(struct CGSize )arg0 contentMode:(NSInteger)arg1 sourceAspectRatio:(CGFloat)arg2 desiredImageSize:(struct CGSize )arg3 demoteFactor:(CGFloat)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFormat:(id)arg0 ;
-(Class)_tableClass;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)fullSizeDesiredLongSide;
-(NSUInteger)fullSizeMaxLongSide;
-(NSUInteger)fullSizeMinShortSide;
-(NSUInteger)hash;
-(NSUInteger)tableFormatBytesPerPixel;
-(NSUInteger)tableFormatBytesPerRowForWidth:(int)arg0 ;
-(id)createTableWithPath:(id)arg0 readOnly:(BOOL)arg1 format:(id)arg2 ;
-(id)description;
-(id)init;
-(id)initWithFormatID:(unsigned short)arg0 ;
-(id)initWithName:(id)arg0 size:(struct CGSize )arg1 isCropped:(BOOL)arg2 ;
-(id)initWithName:(id)arg0 size:(struct CGSize )arg1 isCropped:(BOOL)arg2 version:(NSInteger)arg3 isAlwaysFullScreen:(BOOL)arg4 ;
-(id)initWithName:(id)arg0 size:(struct CGSize )arg1 isCropped:(BOOL)arg2 version:(NSInteger)arg3 isAlwaysFullScreen:(BOOL)arg4 formatMode:(NSInteger)arg5 thumbnailKind:(NSInteger)arg6 ;
-(id)shortDescription;
-(id)thumbnailSpecification;
-(struct CGSize )_shortSideFormatScaledSizeForSourceSize:(struct CGSize )arg0 capLength:(BOOL)arg1 ;
-(struct CGSize )scaledSizeForSourceSize:(struct CGSize )arg0 ;
-(struct CGSize )scaledSizeForSourceSize:(struct CGSize )arg0 capLength:(BOOL)arg1 ;


@end


#endif