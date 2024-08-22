// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCHANNELCLUSTERCHANNELINFO_H
#define MTRCHANNELCLUSTERCHANNELINFO_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterChannelInfo : NSObject

@property (retain, nonatomic) NSString *affiliateCallSign; // ivar: _affiliateCallSign
@property (retain, nonatomic) NSString *callSign; // ivar: _callSign
@property (retain, nonatomic) NSNumber *majorNumber; // ivar: _majorNumber
@property (retain, nonatomic) NSNumber *minorNumber; // ivar: _minorNumber
@property (retain, nonatomic) NSString *name; // ivar: _name


-(id)description;
-(id)init;


@end


#endif