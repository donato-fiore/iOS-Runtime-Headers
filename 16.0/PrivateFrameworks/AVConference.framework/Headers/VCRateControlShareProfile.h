// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCRATECONTROLSHAREPROFILE_H
#define VCRATECONTROLSHAREPROFILE_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface VCRateControlShareProfile : NSObject <NSCopying>



@property (nonatomic) unsigned int rateSharingCount; // ivar: _rateSharingCount
@property (nonatomic) unsigned int reservedBitrate; // ivar: _reservedBitrate


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif