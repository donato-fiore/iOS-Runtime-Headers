// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUEDITINGINITIALPAYLOAD_H
#define PUEDITINGINITIALPAYLOAD_H

@class NSString, PHAdjustmentData, NSDate, NSData, NSURL, CLLocation;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PUEditingInitialPayload : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (nonatomic) NSInteger adjustmentBaseVersion; // ivar: _adjustmentBaseVersion
@property (retain, nonatomic) PHAdjustmentData *adjustmentData; // ivar: _adjustmentData
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (copy, nonatomic) NSData *displaySizeImageData; // ivar: _displaySizeImageData
@property (nonatomic) int fullSizeImageExifOrientation; // ivar: _fullSizeImageExifOrientation
@property (retain, nonatomic) NSURL *fullSizeImageURL; // ivar: _fullSizeImageURL
@property (copy, nonatomic) NSString *fullSizeImageURLSandboxExtensionToken; // ivar: _fullSizeImageURLSandboxExtensionToken
@property (nonatomic) ? livePhotoStillDisplayTime; // ivar: _livePhotoStillDisplayTime
@property (copy, nonatomic) CLLocation *location; // ivar: _location
@property (nonatomic) NSUInteger mediaSubtypes; // ivar: _mediaSubtypes
@property (nonatomic) NSInteger mediaType; // ivar: _mediaType
@property (copy, nonatomic) NSData *placeholderImageData; // ivar: _placeholderImageData
@property (nonatomic) NSInteger playbackStyle; // ivar: _playbackStyle
@property (copy, nonatomic) NSString *uniformTypeIdentifier; // ivar: _uniformTypeIdentifier
@property (copy, nonatomic) NSString *videoPathSandboxExtensionToken; // ivar: _videoPathSandboxExtensionToken
@property (retain, nonatomic) NSURL *videoURL; // ivar: _videoURL


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif