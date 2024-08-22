// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LCFFEATURESET_H
#define LCFFEATURESET_H

@class NSDictionary, NSNumber, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface LCFFeatureSet : NSObject

@property (readonly, nonatomic) NSDictionary *featureValues; // ivar: _featureValues
@property (readonly, nonatomic) NSNumber *featureVersion; // ivar: _featureVersion
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSDate *timestamp; // ivar: _timestamp


-(id)initWithIdentifier:(id)arg0 featureVersion:(id)arg1 timestamp:(id)arg2 featureValues:(id)arg3 ;


@end


#endif