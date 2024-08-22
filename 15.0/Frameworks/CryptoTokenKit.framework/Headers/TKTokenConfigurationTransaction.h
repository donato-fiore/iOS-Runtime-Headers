// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKTOKENCONFIGURATIONTRANSACTION_H
#define TKTOKENCONFIGURATIONTRANSACTION_H


#import <Foundation/Foundation.h>

#import "TKTokenConfigurationConnection.h"

@interface TKTokenConfigurationTransaction : NSObject {
    TKTokenConfigurationConnection *_configurationConnection;
}




-(id)initWithConfigurationConnection:(id)arg0 ;
-(void)commit;
-(void)dealloc;


@end


#endif