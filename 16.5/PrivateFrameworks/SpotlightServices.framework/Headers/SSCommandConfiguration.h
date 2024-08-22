// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSCOMMANDCONFIGURATION_H
#define SSCOMMANDCONFIGURATION_H

@class SFCommand, NSString;

#import <Foundation/Foundation.h>


@interface SSCommandConfiguration : NSObject

@property (retain) SFCommand *command; // ivar: _command
@property (retain) NSString *symbol; // ivar: _symbol
@property (retain) NSString *title; // ivar: _title


+(id)commandButtonItemForAddressLocation:(id)arg0 ;
+(id)commandButtonItemForBirthday:(id)arg0 ;
+(id)commandButtonItemForEmail:(id)arg0 ;
+(id)commandButtonItemForPhoneNumber:(id)arg0 contact:(id)arg1 ;
+(id)dialRequestURLWithPhoneNumber:(id)arg0 contact:(id)arg1 ;
+(id)punchoutCommandWithScheme:(id)arg0 host:(id)arg1 path:(id)arg2 queryItems:(id)arg3 ;
+(id)valueWithPrimaryCommand:(id)arg0 copyString:(id)arg1 copyTitle:(id)arg2 previewCommandConfigurations:(id)arg3 ;
+(id)valueWithPrimaryCommand:(id)arg0 copyString:(id)arg1 copyTitle:(id)arg2 previewCommandTitle:(id)arg3 ;
-(id)createSFCommandButtonItem;
-(id)initWithTitle:(id)arg0 symbol:(id)arg1 command:(id)arg2 ;


@end


#endif