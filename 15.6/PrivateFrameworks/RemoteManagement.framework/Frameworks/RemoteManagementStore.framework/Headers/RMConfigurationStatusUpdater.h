// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMCONFIGURATIONSTATUSUPDATER_H
#define RMCONFIGURATIONSTATUSUPDATER_H


#import <Foundation/Foundation.h>

#import "RMSubscriberStore.h"

@interface RMConfigurationStatusUpdater : NSObject

@property (readonly, weak, nonatomic) RMSubscriberStore *store; // ivar: _store


+(id)fileSystemSafeCharacterSet;
+(id)getStatusDirectoryURLWithParentURL:(id)arg0 declarationType:(id)arg1 declarationIdentifier:(id)arg2 serverToken:(id)arg3 ;
-(id)_getStatusFileURLForDeclarationType:(id)arg0 declarationIdentifier:(id)arg1 serverToken:(id)arg2 ;
-(id)getStatusDirectoryURLForDeclarationType:(id)arg0 declarationIdentifier:(id)arg1 serverToken:(id)arg2 ;
-(id)initWithSubscriberStore:(id)arg0 ;
-(void)_persistStatusForDeclarationType:(id)arg0 declarationIdentifier:(id)arg1 serverToken:(id)arg2 validity:(BOOL)arg3 reasons:(id)arg4 ;
-(void)assetCannotBeDeserialized:(id)arg0 error:(id)arg1 ;
-(void)assetCannotBeDownloaded:(id)arg0 error:(id)arg1 ;
-(void)assetCannotBeVerified:(id)arg0 error:(id)arg1 ;
-(void)assetEncounteredInternalError:(id)arg0 error:(id)arg1 ;
-(void)assetSuccessfullyResolved:(id)arg0 ;
-(void)configurationCannotBeDeserialized:(id)arg0 error:(id)arg1 ;
-(void)configurationFailedToApply:(id)arg0 error:(id)arg1 ;
-(void)configurationIsInvalid:(id)arg0 error:(id)arg1 ;
-(void)configurationSuccessfullyApplied:(id)arg0 ;


@end


#endif