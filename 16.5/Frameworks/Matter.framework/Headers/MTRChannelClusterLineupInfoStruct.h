// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCHANNELCLUSTERLINEUPINFOSTRUCT_H
#define MTRCHANNELCLUSTERLINEUPINFOSTRUCT_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterLineupInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSNumber *lineupInfoType; // ivar: _lineupInfoType
@property (copy, nonatomic) NSString *lineupName; // ivar: _lineupName
@property (copy, nonatomic) NSString *operatorName; // ivar: _operatorName
@property (copy, nonatomic) NSString *postalCode; // ivar: _postalCode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif