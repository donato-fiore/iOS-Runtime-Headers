// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DIATTRIBUTEIMAGECAPTUREREQUIREMENTS_H
#define DIATTRIBUTEIMAGECAPTUREREQUIREMENTS_H

@class NSNumber, NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DIAttributeImageCaptureRequirements : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSNumber *compressionRatio; // ivar: _compressionRatio
@property (nonatomic) BOOL liveliness; // ivar: _liveliness
@property (nonatomic) NSUInteger maxRetakeCount; // ivar: _maxRetakeCount
@property (retain, nonatomic) NSNumber *maximumCompressionRatio; // ivar: _maximumCompressionRatio
@property (nonatomic) NSUInteger minBorderPadding; // ivar: _minBorderPadding
@property (nonatomic) NSUInteger minHeight; // ivar: _minHeight
@property (nonatomic) NSUInteger minWidth; // ivar: _minWidth
@property (nonatomic) NSUInteger preferredHeight; // ivar: _preferredHeight
@property (nonatomic) NSUInteger preferredWidth; // ivar: _preferredWidth
@property (nonatomic) NSUInteger ratioHeight; // ivar: _ratioHeight
@property (nonatomic) NSUInteger ratioWidth; // ivar: _ratioWidth
@property (nonatomic) NSUInteger selection; // ivar: _selection
@property (copy, nonatomic) NSArray *supportedEncoding; // ivar: _supportedEncoding
@property (nonatomic) NSUInteger timeout; // ivar: _timeout
@property (copy, nonatomic) NSString *userMessage; // ivar: _userMessage


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImageCaptureRequirements:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif