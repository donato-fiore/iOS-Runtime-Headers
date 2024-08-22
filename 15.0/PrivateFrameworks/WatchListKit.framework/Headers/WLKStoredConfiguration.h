// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKSTOREDCONFIGURATION_H
#define WLKSTOREDCONFIGURATION_H

@class NSDictionary, NSDate, NSString;

#import <Foundation/Foundation.h>


@interface WLKStoredConfiguration : NSObject

@property (nonatomic) BOOL activeUser; // ivar: _activeUser
@property (retain, nonatomic) NSDictionary *requiredRequestKeyValuePairs; // ivar: _requiredRequestKeyValuePairs
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *utsc; // ivar: _utsc
@property (readonly, nonatomic) NSString *utsk;
@property (retain, nonatomic) NSString *vppaState; // ivar: _vppaState


-(id)description;


@end


#endif