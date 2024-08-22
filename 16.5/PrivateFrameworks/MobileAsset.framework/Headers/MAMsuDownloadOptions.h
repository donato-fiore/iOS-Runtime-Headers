// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAMSUDOWNLOADOPTIONS_H
#define MAMSUDOWNLOADOPTIONS_H

@class NSString;


#import "MADownloadOptions.h"

@interface MAMsuDownloadOptions : MADownloadOptions

@property (nonatomic) BOOL allowSameVersion; // ivar: _allowSameVersion
@property (nonatomic) NSInteger delayPeriod; // ivar: _delayPeriod
@property (retain, nonatomic) NSString *liveAssetAudienceUUID; // ivar: _liveAssetAudienceUUID
@property (retain, nonatomic) NSString *prerequisiteBuildVersion; // ivar: _prerequisiteBuildVersion
@property (retain, nonatomic) NSString *prerequisiteProductVersion; // ivar: _prerequisiteProductVersion
@property (retain, nonatomic) NSString *prerequisiteReleaseType; // ivar: _prerequisiteReleaseType
@property (nonatomic) BOOL prerequisiteReleaseTypeIsOverridden; // ivar: _prerequisiteReleaseTypeIsOverridden
@property (retain, nonatomic) NSString *purpose; // ivar: _purpose
@property (retain, nonatomic) NSString *requestedProductVersion; // ivar: _requestedProductVersion
@property (nonatomic) BOOL supervised; // ivar: _supervised


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)encodeAsPlist;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlist:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif