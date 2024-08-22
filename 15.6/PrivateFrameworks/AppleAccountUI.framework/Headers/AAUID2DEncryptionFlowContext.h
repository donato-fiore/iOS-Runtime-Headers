// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUID2DENCRYPTIONFLOWCONTEXT_H
#define AAUID2DENCRYPTIONFLOWCONTEXT_H

@class CDPUIDeviceToDeviceEncryptionFlowContext;



@interface AAUID2DEncryptionFlowContext : CDPUIDeviceToDeviceEncryptionFlowContext

@property (nonatomic) NSUInteger contextType; // ivar: _contextType


+(id)contextWithType:(NSUInteger)arg0 ;
+(id)contextWithType:(NSUInteger)arg0 altDSID:(id)arg1 ;
-(BOOL)requiresSynchronousRepair;
-(NSInteger)deviceToDeviceEncryptionUpgradeType;
-(NSInteger)deviceToDeviceEncryptionUpgradeUIStyle;
-(id)initWithType:(NSUInteger)arg0 ;
-(id)initWithType:(NSUInteger)arg0 altDSID:(id)arg1 ;


@end


#endif