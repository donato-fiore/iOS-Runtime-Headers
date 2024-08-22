// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFSHARINGREMAKEROPTIONS_H
#define PFSHARINGREMAKEROPTIONS_H

@class NSString, NSDate, CLLocation, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PFSharingRemakerOptions : NSObject <NSCopying>



@property (copy, nonatomic) NSString *customAccessibilityLabel; // ivar: _customAccessibilityLabel
@property (copy, nonatomic) NSString *customCaption; // ivar: _customCaption
@property (copy, nonatomic) NSDate *customDate; // ivar: _customDate
@property (copy, nonatomic) CLLocation *customLocation; // ivar: _customLocation
@property (copy, nonatomic) NSString *exportFileType; // ivar: _exportFileType
@property (copy, nonatomic) NSString *exportPreset; // ivar: _exportPreset
@property (copy, nonatomic) NSURL *outputDirectoryURL; // ivar: _outputDirectoryURL
@property (copy, nonatomic) NSString *outputFilename; // ivar: _outputFilename
@property (nonatomic) BOOL shouldConvertToSRGB; // ivar: _shouldConvertToSRGB
@property (nonatomic) BOOL shouldStripAccessibilityDescription; // ivar: _shouldStripAccessibilityDescription
@property (nonatomic) BOOL shouldStripAllMetadata; // ivar: _shouldStripAllMetadata
@property (nonatomic) BOOL shouldStripCaption; // ivar: _shouldStripCaption
@property (nonatomic) BOOL shouldStripLocation; // ivar: _shouldStripLocation


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif