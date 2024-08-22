// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXOEMBEDRESPONSE_H
#define SXOEMBEDRESPONSE_H

@class NSString, NSURL;


#import "SXJSONObject.h"

@interface SXOEmbedResponse : SXJSONObject

@property (readonly, nonatomic) NSString *authorName;
@property (readonly, nonatomic) NSURL *authorURL;
@property (readonly, nonatomic) CGFloat cacheAge;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSURL *providerURL;
@property (readonly, nonatomic) CGFloat thumbnailHeight;
@property (readonly, nonatomic) CGSize thumbnailSize;
@property (readonly, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) CGFloat thumbnailWidth;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *version;


+(id)jsonPropertyNameForObjCPropertyName:(id)arg0 ;
-(CGFloat)cacheAgeWithValue:(id)arg0 withType:(int)arg1 ;
-(id)objectForKey:(id)arg0 ;


@end


#endif