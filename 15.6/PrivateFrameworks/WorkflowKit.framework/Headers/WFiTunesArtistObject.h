// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFITUNESARTISTOBJECT_H
#define WFITUNESARTISTOBJECT_H

@class NSString, NSDictionary;
@protocol MTLJSONSerializing;


#import "WFiTunesObject.h"

@interface WFiTunesArtistObject : WFiTunesObject <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)JSONKeyPathsByPropertyKey;


@end


#endif