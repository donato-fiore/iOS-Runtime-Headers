// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DKCONFIGURATION_H
#define DKCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface DKConfiguration : NSObject

@property (nonatomic) BOOL allowNonInteractiveCloudUpload; // ivar: _allowNonInteractiveCloudUpload
@property (nonatomic) BOOL postFollowUp; // ivar: _postFollowUp
@property (nonatomic) BOOL preventOpeningSafari; // ivar: _preventOpeningSafari
@property (nonatomic) BOOL skipBackup; // ivar: _skipBackup
@property (nonatomic) BOOL upsellTradeIn; // ivar: _upsellTradeIn


+(id)defaultConfiguration;
+(id)setupAssistantConfiguration;
-(id)init;


@end


#endif