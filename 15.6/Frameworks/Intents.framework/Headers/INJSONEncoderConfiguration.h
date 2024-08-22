// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INJSONENCODERCONFIGURATION_H
#define INJSONENCODERCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface INJSONEncoderConfiguration : NSObject <NSCopying>



@property (copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) BOOL locationIncludesTimestamp; // ivar: _locationIncludesTimestamp


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif