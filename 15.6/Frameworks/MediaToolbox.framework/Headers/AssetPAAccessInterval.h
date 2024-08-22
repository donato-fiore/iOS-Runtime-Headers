// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASSETPAACCESSINTERVAL_H
#define ASSETPAACCESSINTERVAL_H

@class PATCCAccess, PAAccessLogger, PAAccessInterval, PAApplication;

#import <Foundation/Foundation.h>


@interface AssetPAAccessInterval : NSObject {
    PATCCAccess *_access;
    PAAccessLogger *_logger;
    PAAccessInterval *_accessInterval;
    PAApplication *_application;
}




-(id)initWithClientPid:(int)arg0 auditToken:(struct ? )arg1 ;
-(void)dealloc;


@end


#endif