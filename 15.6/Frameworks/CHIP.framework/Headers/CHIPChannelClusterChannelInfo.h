// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCHANNELCLUSTERCHANNELINFO_H
#define CHIPCHANNELCLUSTERCHANNELINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPChannelClusterChannelInfo : NSObject

@property (retain, nonatomic) NSString *affiliateCallSign; // ivar: _affiliateCallSign
@property (retain, nonatomic) NSString *callSign; // ivar: _callSign
@property (retain, nonatomic) NSNumber *majorNumber; // ivar: _majorNumber
@property (retain, nonatomic) NSNumber *minorNumber; // ivar: _minorNumber
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)init;


@end


#endif