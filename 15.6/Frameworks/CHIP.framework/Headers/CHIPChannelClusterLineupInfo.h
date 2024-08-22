// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCHANNELCLUSTERLINEUPINFO_H
#define CHIPCHANNELCLUSTERLINEUPINFO_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface CHIPChannelClusterLineupInfo : NSObject

@property (retain, nonatomic) NSNumber *lineupInfoType; // ivar: _lineupInfoType
@property (retain, nonatomic) NSString *lineupName; // ivar: _lineupName
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode


-(id)init;


@end


#endif