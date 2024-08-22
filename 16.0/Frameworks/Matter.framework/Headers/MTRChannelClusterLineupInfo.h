// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRCHANNELCLUSTERLINEUPINFO_H
#define MTRCHANNELCLUSTERLINEUPINFO_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterLineupInfo : NSObject

@property (retain, nonatomic) NSNumber *lineupInfoType; // ivar: _lineupInfoType
@property (retain, nonatomic) NSString *lineupName; // ivar: _lineupName
@property (retain, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (retain, nonatomic) NSString *postalCode; // ivar: _postalCode


-(id)description;
-(id)init;


@end


#endif