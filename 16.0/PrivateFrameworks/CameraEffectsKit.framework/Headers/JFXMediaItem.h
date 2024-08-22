// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXMEDIAITEM_H
#define JFXMEDIAITEM_H

@class PVColorSpace;
@protocol NSCopying, JFXMediaItemDelegate;

#import <Foundation/Foundation.h>


@interface JFXMediaItem : NSObject <NSCopying>



@property (readonly, nonatomic) PVColorSpace *colorSpace;
@property (weak, nonatomic) NSObject<JFXMediaItemDelegate> *delegate; // ivar: _delegate
@property (nonatomic) int durationAt30fps; // ivar: _durationAt30fps
@property (nonatomic) NSInteger interfaceOrientationForDisplay; // ivar: _interfaceOrientationForDisplay
@property (nonatomic) NSInteger mediaLoadState; // ivar: _mediaLoadState
@property (nonatomic) NSInteger mediaState; // ivar: _mediaState
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (readonly, nonatomic) int playableMediaContentMode;


+(BOOL)supportsSecureCoding;
-(BOOL)canBeAddedToSequence;
-(BOOL)canHaveFilter;
-(BOOL)canSaveToCameraRoll;
-(BOOL)hasAudibleCharacteristic;
-(BOOL)hasPhotoCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)info;
-(id)init;
-(id)initWithInfo:(id)arg0 delegate:(id)arg1 ;
-(void)dealloc;


@end


#endif