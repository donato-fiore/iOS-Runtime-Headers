// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNLIVEVIDEOCAPTUREDEVICEDESCRIPTION_H
#define KNLIVEVIDEOCAPTUREDEVICEDESCRIPTION_H

@class TSKSosBase;
@protocol NSCopying;


#import "KNLiveVideoCaptureDeviceIdentifier.h"

@interface KNLiveVideoCaptureDeviceDescription : TSKSosBase <NSCopying>



@property (readonly, nonatomic) CGSize defaultVideoResolution; // ivar: _defaultVideoResolution
@property (readonly, nonatomic) KNLiveVideoCaptureDeviceIdentifier *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 defaultVideoResolution:(struct CGSize )arg1 ;
-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif