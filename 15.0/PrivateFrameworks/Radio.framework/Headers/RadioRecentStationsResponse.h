// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIORECENTSTATIONSRESPONSE_H
#define RADIORECENTSTATIONSRESPONSE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface RadioRecentStationsResponse : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, copy, nonatomic) NSArray *stationDictionaries;
@property (readonly, copy, nonatomic) NSArray *stationGroups;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif