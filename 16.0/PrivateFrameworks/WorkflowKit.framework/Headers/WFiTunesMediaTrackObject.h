// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFITUNESMEDIATRACKOBJECT_H
#define WFITUNESMEDIATRACKOBJECT_H

@class NSString, NSDictionary, WFTimeInterval, NSURL;
@protocol MTLJSONSerializing;


#import "WFiTunesStoreObject.h"

@interface WFiTunesMediaTrackObject : WFiTunesStoreObject <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) WFTimeInterval *duration; // ivar: _duration
@property (readonly, nonatomic) BOOL explicit; // ivar: _explicit
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *previewURL; // ivar: _previewURL
@property (readonly, nonatomic) BOOL streamable; // ivar: _streamable
@property (readonly) Class superclass;


+(id)JSONKeyPathsByPropertyKey;
+(id)priceJSONTransformer;


@end


#endif