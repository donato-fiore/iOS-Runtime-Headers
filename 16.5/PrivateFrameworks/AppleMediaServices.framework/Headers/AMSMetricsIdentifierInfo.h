// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMETRICSIDENTIFIERINFO_H
#define AMSMETRICSIDENTIFIERINFO_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>


@interface AMSMetricsIdentifierInfo : NSObject

@property (nonatomic) BOOL crossDeviceSync; // ivar: _crossDeviceSync
@property (nonatomic) BOOL deleted; // ivar: _deleted
@property (retain, nonatomic) NSDate *expires; // ivar: _expires
@property (retain, nonatomic) NSString *idKey; // ivar: _idKey
@property (retain, nonatomic) NSDate *lastSync; // ivar: _lastSync
@property (retain, nonatomic) NSDate *modified; // ivar: _modified
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *storeUUID; // ivar: _storeUUID
@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)syncStateFieldName;
-(void)populateDictionary:(id)arg0 ;


@end


#endif