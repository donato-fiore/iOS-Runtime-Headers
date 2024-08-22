// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIASSETIDURL_H
#define TRIASSETIDURL_H

@class NSString<TRIAssetId>, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRIAssetIdURL : NSObject <NSCopying>



@property (readonly, nonatomic) NSString<TRIAssetId> *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(id)urlWithAssetId:(id)arg0 url:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualTourl:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementAssetId:(id)arg0 ;
-(id)copyWithReplacementUrl:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAssetId:(id)arg0 url:(id)arg1 ;


@end


#endif