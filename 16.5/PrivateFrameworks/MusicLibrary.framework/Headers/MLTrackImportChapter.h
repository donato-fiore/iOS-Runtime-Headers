// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLTRACKIMPORTCHAPTER_H
#define MLTRACKIMPORTCHAPTER_H

@class NSURL, NSString, NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MLTrackImportChapter : NSObject <NSCopying>



@property (copy, nonatomic) NSURL *URL; // ivar: _url
@property (copy, nonatomic) NSString *URLTitle; // ivar: _urlTitle
@property (copy, nonatomic) NSString *imageCacheKey; // ivar: _imageCacheKey
@property (copy, nonatomic) NSData *imageData; // ivar: _imageData
@property (nonatomic) NSUInteger startTimeInMilliseconds; // ivar: _startTimeInMilliseconds
@property (copy, nonatomic) NSString *title; // ivar: _title


-(BOOL)isEqualIgnoringTimesAndTitle:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)normalizeProperties;


@end


#endif