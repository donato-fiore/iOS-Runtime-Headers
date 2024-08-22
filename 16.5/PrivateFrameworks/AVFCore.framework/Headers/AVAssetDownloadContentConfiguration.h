// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETDOWNLOADCONTENTCONFIGURATION_H
#define AVASSETDOWNLOADCONTENTCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AVAssetDownloadContentConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSArray *mediaSelections; // ivar: _mediaSelections
@property (copy, nonatomic) NSArray *variantQualifiers; // ivar: _variantQualifiers


+(BOOL)supportsSecureCoding;
-(*void)_createFigContentConfigForEnvironmentalCondition:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)_serializeIntoDownloadConfig:(*void)arg0 asset:(id)arg1 ;
-(void)_serializeIntoDownloadConfig:(*void)arg0 environmentalCondition:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif