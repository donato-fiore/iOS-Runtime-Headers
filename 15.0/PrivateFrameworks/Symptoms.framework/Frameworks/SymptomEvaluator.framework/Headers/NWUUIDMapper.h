// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWUUIDMAPPER_H
#define NWUUIDMAPPER_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface NWUUIDMapper : NSObject

@property (retain, nonatomic) NSUUID *externalUUID; // ivar: _externalUUID
@property (nonatomic) CGFloat lastAccessDate; // ivar: _lastAccessDate
@property (nonatomic) NSUInteger usageFlags; // ivar: _usageFlags


-(id)description;


@end


#endif