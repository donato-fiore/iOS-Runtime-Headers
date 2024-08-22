// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSYNCOPERATIONOPTIONS_H
#define HMDSYNCOPERATIONOPTIONS_H

@class HMFObject, NSString;



@interface HMDSyncOperationOptions : HMFObject

@property (nonatomic, getter=isCloudConflict) BOOL cloudConflict; // ivar: _cloudConflict
@property (nonatomic, getter=isDelayRespected) BOOL delayRespected; // ivar: _delayRespected
@property (readonly, nonatomic) NSUInteger operationType; // ivar: _operationType
@property (readonly, nonatomic) NSString *zoneName; // ivar: _zoneName


-(id)description;
-(id)initWithOperationType:(NSUInteger)arg0 zoneName:(id)arg1 cloudConflict:(BOOL)arg2 delayRespected:(BOOL)arg3 ;
-(id)initWithOperationType:(NSUInteger)arg0 zoneName:(id)arg1 delayRespected:(BOOL)arg2 ;


@end


#endif