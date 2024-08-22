// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSETCOLLECTIONINFO_H
#define ASSETCOLLECTIONINFO_H

@class NSString, NSNumber, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AssetCollectionInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *GUID; // ivar: _GUID
@property (readonly, nonatomic) NSString *derivativeUTI; // ivar: _derivativeUTI
@property (readonly, nonatomic) NSNumber *height; // ivar: _height
@property (readonly, nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (readonly, nonatomic) BOOL isMine; // ivar: _isMine
@property (readonly, nonatomic) BOOL isPhotoIris; // ivar: _isPhotoIris
@property (readonly, nonatomic) BOOL isVideo; // ivar: _isVideo
@property (readonly, nonatomic) NSDictionary *metaData; // ivar: _metaData
@property (readonly, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, nonatomic) NSNumber *originalFilesize; // ivar: _originalFilesize
@property (readonly, nonatomic) NSString *personID; // ivar: _personID
@property (readonly, nonatomic) unsigned short playbackVariation; // ivar: _playbackVariation
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSNumber *width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAssetCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif