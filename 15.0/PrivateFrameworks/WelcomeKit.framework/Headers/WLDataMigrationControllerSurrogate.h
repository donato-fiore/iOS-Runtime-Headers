// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLDATAMIGRATIONCONTROLLERSURROGATE_H
#define WLDATAMIGRATIONCONTROLLERSURROGATE_H



#import "WLDataMigrationController.h"

@interface WLDataMigrationControllerSurrogate : WLDataMigrationController {
    BOOL _forceDownloadError;
}




-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 forceDownloadError:(BOOL)arg1 ;
-(void)startMigrationUsingRetryPolicies:(BOOL)arg0 ;


@end


#endif