// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMAPIREQUEST_H
#define NMAPIREQUEST_H

@class MPStoreModelRequest, NSURL;



@interface NMAPIRequest : MPStoreModelRequest

@property (nonatomic) NSUInteger cachePolicy; // ivar: _cachePolicy
@property (retain, nonatomic) NSURL *cacheURL; // ivar: _cacheURL


+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
-(Class)responseParserClass;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;
-(id)urlComponentsWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(void)setDefaultMusicRequestProperties;
-(void)setEditorialRequestProperties;


@end


#endif