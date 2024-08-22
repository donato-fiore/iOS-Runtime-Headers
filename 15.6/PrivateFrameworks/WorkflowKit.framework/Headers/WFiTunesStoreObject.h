// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFITUNESSTOREOBJECT_H
#define WFITUNESSTOREOBJECT_H

@class NSString, NSDictionary, NSNumber, NSDate;
@protocol MTLJSONSerializing;


#import "WFiTunesObject.h"

@interface WFiTunesStoreObject : WFiTunesObject <MTLJSONSerializing>



@property (readonly, nonatomic) NSString *artistID; // ivar: _artistID
@property (readonly, nonatomic) NSString *artistName; // ivar: _artistName
@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *formattedPrice;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *price; // ivar: _price
@property (readonly, nonatomic) NSDate *releaseDate; // ivar: _releaseDate
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;


@end


#endif