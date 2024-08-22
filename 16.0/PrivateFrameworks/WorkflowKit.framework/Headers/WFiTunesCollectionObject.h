// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFITUNESCOLLECTIONOBJECT_H
#define WFITUNESCOLLECTIONOBJECT_H

@class NSString, NSDictionary, NSNumber;
@protocol MTLJSONSerializing;


#import "WFiTunesStoreObject.h"

@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) NSString *genre; // ivar: _genre
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *trackCount; // ivar: _trackCount
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)JSONKeyPathsByPropertyKey;


@end


#endif