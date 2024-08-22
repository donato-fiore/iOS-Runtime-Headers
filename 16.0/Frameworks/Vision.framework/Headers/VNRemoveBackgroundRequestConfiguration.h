// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNREMOVEBACKGROUNDREQUESTCONFIGURATION_H
#define VNREMOVEBACKGROUNDREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNRemoveBackgroundRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL cropResult; // ivar: _cropResult
@property (nonatomic) BOOL performInPlace; // ivar: _performInPlace
@property (nonatomic) BOOL returnMask; // ivar: _returnMask


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif