// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIICLOUDMEDIAUSAGEINFO_H
#define AAUIICLOUDMEDIAUSAGEINFO_H

@class NSString, UIColor;

#import <Foundation/Foundation.h>


@interface AAUIiCloudMediaUsageInfo : NSObject

@property (nonatomic) float bytesUsed; // ivar: _bytesUsed
@property (retain, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (retain, nonatomic) NSString *mediaType; // ivar: _mediaType
@property (retain, nonatomic) UIColor *representativeColor; // ivar: _representativeColor


-(id)capacityBarCatagory;
-(id)initWithMediaType:(id)arg0 representativeColor:(id)arg1 bytesUsed:(float)arg2 ;


@end


#endif