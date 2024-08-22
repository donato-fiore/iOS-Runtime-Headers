// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMPHOTOASSETDATA_H
#define AXMPHOTOASSETDATA_H

@class NSString, NSDate, NSData, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AXMPhotoAssetData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *UTI;
@property (nonatomic) BOOL allowNetworkAccess; // ivar: _allowNetworkAccess
@property (retain, nonatomic) NSDate *assetCreationDate; // ivar: _assetCreationDate
@property (retain, nonatomic) NSData *assetImageData; // ivar: _assetImageData
@property (retain, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (nonatomic) unsigned int assetOrientation; // ivar: _assetOrientation
@property (retain, nonatomic) NSURL *assetURL; // ivar: _assetURL
@property (retain, nonatomic) NSString *assetUTI; // ivar: _assetUTI
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSData *imageData;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) NSURL *url;
@property (nonatomic) NSInteger wellKnownPHPhotoLibraryIdentifier; // ivar: _wellKnownPHPhotoLibraryIdentifier


+(BOOL)supportsSecureCoding;
-(id)_photoAuthorizationMessage:(NSInteger)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateAssetDetails;


@end


#endif