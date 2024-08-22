// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2CUSTOMDATA_H
#define NEIKEV2CUSTOMDATA_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2CustomData : NSObject <NSCopying>



@property (retain) NSData *customData; // ivar: _customData
@property NSUInteger customType; // ivar: _customType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif