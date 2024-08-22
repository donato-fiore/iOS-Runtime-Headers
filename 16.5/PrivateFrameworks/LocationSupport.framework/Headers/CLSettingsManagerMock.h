// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSETTINGSMANAGERMOCK_H
#define CLSETTINGSMANAGERMOCK_H

@class NSString;
@protocol CLSettingsManagerMockProtocol;


#import "CLSettingsManagerInternal.h"

@interface CLSettingsManagerMock : CLSettingsManagerInternal <CLSettingsManagerMockProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;


-(id)init;
-(void)setSettings:(id)arg0 ;


@end


#endif