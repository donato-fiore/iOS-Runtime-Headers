// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLDAEMONCONTROLLER_H
#define WLDAEMONCONTROLLER_H


#import <Foundation/Foundation.h>

#import "WLDaemonConnection.h"

@interface WLDaemonController : NSObject

@property (retain, nonatomic) WLDaemonConnection *connection; // ivar: _connection


+(id)sharedInstance;
-(id)init;
-(void)getLocalImportOptionsWithCompletion:(id)arg0 ;
-(void)importLocalContent;
-(void)setStashDataLocally:(BOOL)arg0 ;


@end


#endif