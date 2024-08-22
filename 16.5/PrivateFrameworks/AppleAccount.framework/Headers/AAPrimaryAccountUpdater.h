// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAPRIMARYACCOUNTUPDATER_H
#define AAPRIMARYACCOUNTUPDATER_H

@class ACAccount;
@protocol AADataclassVersionUpdateProtocol;


#import "AAVersionUpdater.h"

@interface AAPrimaryAccountUpdater : AAVersionUpdater <AADataclassVersionUpdateProtocol>

 {
    ACAccount *_appleAccount;
}




+(id)orderedVersions;
-(BOOL)performVersionUpdate0ToVersion1;
-(id)initWithAccount:(id)arg0 ;


@end


#endif