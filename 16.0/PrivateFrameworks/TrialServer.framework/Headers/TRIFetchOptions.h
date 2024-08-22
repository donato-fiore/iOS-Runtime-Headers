// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIFETCHOPTIONS_H
#define TRIFETCHOPTIONS_H

@class NSNumber, TRIDownloadOptions;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIFetchOptions : NSObject <NSCopying>



@property (readonly, nonatomic) NSNumber *cacheDeleteAvailableSpaceClass; // ivar: _cacheDeleteAvailableSpaceClass
@property (readonly, nonatomic) TRIDownloadOptions *downloadOptions; // ivar: _downloadOptions


+(id)optionsWithDownloadOptions:(id)arg0 cacheDeleteAvailableSpaceClass:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementCacheDeleteAvailableSpaceClass:(id)arg0 ;
-(id)copyWithReplacementDownloadOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDownloadOptions:(id)arg0 cacheDeleteAvailableSpaceClass:(id)arg1 ;


@end


#endif