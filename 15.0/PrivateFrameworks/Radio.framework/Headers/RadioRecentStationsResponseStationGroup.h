// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIORECENTSTATIONSRESPONSESTATIONGROUP_H
#define RADIORECENTSTATIONSRESPONSESTATIONGROUP_H

@class NSDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface RadioRecentStationsResponseStationGroup : NSObject {
    NSDictionary *_responseDictionary;
}


@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSArray *stationDictionaries;


-(id)initWithResponseDictionary:(id)arg0 ;


@end


#endif