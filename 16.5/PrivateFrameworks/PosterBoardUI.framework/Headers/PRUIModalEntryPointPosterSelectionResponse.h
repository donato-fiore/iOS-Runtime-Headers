// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALENTRYPOINTPOSTERSELECTIONRESPONSE_H
#define PRUIMODALENTRYPOINTPOSTERSELECTIONRESPONSE_H

@class NSUUID;


#import "PRUIModalEntryPointResponse.h"

@interface PRUIModalEntryPointPosterSelectionResponse : PRUIModalEntryPointResponse

@property (readonly, nonatomic) NSUUID *configurationUUID; // ivar: _configurationUUID


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithResult:(NSInteger)arg0 configurationUUID:(id)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif