// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYSETTINGMESSAGEMAPPER_H
#define HMDACCESSORYSETTINGMESSAGEMAPPER_H



#import "HMDSettingMessageMapper.h"

@interface HMDAccessorySettingMessageMapper : HMDSettingMessageMapper

@property (nonatomic) BOOL shouldAllowSharedAdminToEditConstraints; // ivar: _shouldAllowSharedAdminToEditConstraints


-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 allowSharedAdminEditConstraints:(BOOL)arg2 ;


@end


#endif