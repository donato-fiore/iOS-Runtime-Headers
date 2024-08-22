// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMWHITEBALANCECOMMAND_H
#define CAMWHITEBALANCECOMMAND_H



#import "CAMCaptureCommand.h"

@interface CAMWhiteBalanceCommand : CAMCaptureCommand

@property (readonly, nonatomic) BOOL _matchExposureMode; // ivar: __matchExposureMode
@property (readonly, nonatomic) NSInteger _whiteBalanceMode; // ivar: __whiteBalanceMode


-(id)_descriptionForWhiteBalanceMode:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMatchExposureMode;
-(id)initWithWhiteBalanceMode:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 ;


@end


#endif