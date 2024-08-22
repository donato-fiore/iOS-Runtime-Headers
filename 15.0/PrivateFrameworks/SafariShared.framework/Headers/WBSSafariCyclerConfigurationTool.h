// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSSAFARICYCLERCONFIGURATIONTOOL_H
#define WBSSAFARICYCLERCONFIGURATIONTOOL_H


#import <Foundation/Foundation.h>

#import "WBSCyclerServiceProxy.h"

@interface WBSSafariCyclerConfigurationTool : NSObject {
    WBSCyclerServiceProxy *_cyclerProxy;
}




-(id)_commandWithName:(id)arg0 ;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_errorWithCode:(NSInteger)arg0 ;
-(id)_supportedCommands;
-(id)init;
-(void)_configureDevice:(id)arg0 ;
-(void)_exitWithError:(id)arg0 ;
-(void)_fetchStatus:(id)arg0 ;
-(void)_printUsage;
-(void)_resumeCycler:(id)arg0 ;
-(void)_runTest:(id)arg0 ;
-(void)_sendRequestToTest:(id)arg0 ;
-(void)_setConfigurationOption:(id)arg0 ;
-(void)_startCycler:(id)arg0 ;
-(void)_stopCycler:(id)arg0 ;
-(void)_waitForCyclerToFinish:(id)arg0 ;
-(void)run;


@end


#endif