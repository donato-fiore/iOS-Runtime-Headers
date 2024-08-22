// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCONFIGURATION_H
#define SWCONFIGURATION_H

@class NSURL, NSString, NSDictionary, NSLocale;
@protocol NSMutableCopying, SWLocation;

#import <Foundation/Foundation.h>

#import "SWFeedConfiguration.h"

@interface SWConfiguration : NSObject <NSMutableCopying>



@property (copy, nonatomic) NSURL *activePictureInPictureURL; // ivar: _activePictureInPictureURL
@property (nonatomic) CGSize canvasSize; // ivar: _canvasSize
@property (nonatomic) CGRect contentFrame; // ivar: _contentFrame
@property (copy, nonatomic) NSString *contentSizeCategory; // ivar: _contentSizeCategory
@property (copy, nonatomic) NSDictionary *dataSources; // ivar: _dataSources
@property (copy, nonatomic) SWFeedConfiguration *feedConfiguration; // ivar: _feedConfiguration
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL is24HourTime; // ivar: _is24HourTime
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (copy, nonatomic) NSObject<SWLocation> *location; // ivar: _location
@property (copy, nonatomic) NSURL *sourceURL; // ivar: _sourceURL
@property (copy, nonatomic) NSString *storeFront; // ivar: _storeFront
@property (copy, nonatomic) NSString *systemVersion; // ivar: _systemVersion


-(BOOL)isEqualToConfiguration:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStoreFront:(id)arg0 locale:(id)arg1 contentSizeCategory:(id)arg2 canvasSize:(struct CGSize )arg3 contentFrame:(struct CGRect )arg4 dataSources:(id)arg5 location:(id)arg6 sourceURL:(id)arg7 activePictureInPictureURL:(id)arg8 feedConfiguration:(id)arg9 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif