// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCHANNELCLUSTERCHANNELINFOSTRUCT_H
#define MTRCHANNELCLUSTERCHANNELINFOSTRUCT_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTRChannelClusterChannelInfoStruct : NSObject <NSCopying>



@property (copy, nonatomic) NSString *affiliateCallSign; // ivar: _affiliateCallSign
@property (copy, nonatomic) NSString *callSign; // ivar: _callSign
@property (copy, nonatomic) NSNumber *majorNumber; // ivar: _majorNumber
@property (copy, nonatomic) NSNumber *minorNumber; // ivar: _minorNumber
@property (copy, nonatomic) NSString *name; // ivar: _name


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif