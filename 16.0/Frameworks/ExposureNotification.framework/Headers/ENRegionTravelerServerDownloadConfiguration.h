// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENREGIONTRAVELERSERVERDOWNLOADCONFIGURATION_H
#define ENREGIONTRAVELERSERVERDOWNLOADCONFIGURATION_H

@class NSURL;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface ENRegionTravelerServerDownloadConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadBaseURL; // ivar: _tekTravelerDownloadBaseURL
@property (readonly, copy, nonatomic) NSURL *tekTravelerDownloadIndexURL; // ivar: _tekTravelerDownloadIndexURL


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponseDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif