// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAPHOTOADJUSTMENT_H
#define IPAPHOTOADJUSTMENT_H

@class NSDictionary, NSString;


#import "IPAAdjustment.h"

@interface IPAPhotoAdjustment : IPAAdjustment

@property (retain, nonatomic) NSDictionary *autoSettings; // ivar: _autoSettings
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSString *maskUUID; // ivar: _maskUUID


-(id)_debugDescriptionSuffix;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif