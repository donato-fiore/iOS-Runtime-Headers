// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IPFEATUREDATA_H
#define IPFEATUREDATA_H

@class NSMutableDictionary;


#import "IPFeature.h"

@interface IPFeatureData : IPFeature

@property (readonly) NSMutableDictionary *contextDictionary; // ivar: _contextDictionary
@property NSUInteger type; // ivar: _type
@property (retain) id *value; // ivar: _value


+(id)featureDataWithType:(NSUInteger)arg0 value:(id)arg1 matchRange:(struct _NSRange )arg2 ;
-(id)description;
-(id)nGramMarker;


@end


#endif