// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMARKETINGITEM_H
#define AMSMARKETINGITEM_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AMSMarketingItem : NSObject

@property (readonly, nonatomic) NSString *URLString;
@property (readonly, nonatomic) NSDictionary *artworkDictionary;
@property (readonly, nonatomic) NSString *badge;
@property (readonly, nonatomic) NSString *campaignID;
@property (readonly, nonatomic) NSArray *itemActions;
@property (readonly, nonatomic) NSString *itemID;
@property (readonly, copy, nonatomic) NSDictionary *rawValues; // ivar: _rawValues
@property (readonly, nonatomic) NSArray *relatedContent;
@property (readonly, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *templateID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSArray *videos;


-(id)abSettings;
-(id)endDate;
-(id)initWithDictionary:(id)arg0 ;
-(id)renderingAttributes;
-(id)tagline;
-(id)video;


@end


#endif