// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPJSONSEGMENT_H
#define _DPJSONSEGMENT_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface _DPJSONSegment : NSObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSDictionary *parameterDictionary; // ivar: _parameterDictionary
@property (readonly, nonatomic) NSArray *records; // ivar: _records
@property (readonly, copy, nonatomic) NSString *serverAlgorithmString; // ivar: _serverAlgorithmString


-(id)fixDoubleValuesInDictionary:(id)arg0 ;
-(id)init;
-(id)initWithKey:(id)arg0 serverAlgorithmString:(id)arg1 parameterDictionary:(id)arg2 records:(id)arg3 ;
-(id)jsonSegmentString;
-(id)parameterStringFrom:(id)arg0 ;


@end


#endif