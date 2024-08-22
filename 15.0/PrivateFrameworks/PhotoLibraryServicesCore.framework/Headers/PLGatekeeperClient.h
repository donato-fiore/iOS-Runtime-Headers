// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLGATEKEEPERCLIENT_H
#define PLGATEKEEPERCLIENT_H


#import <Foundation/Foundation.h>

#import "PLAssetsdClient.h"

@interface PLGatekeeperClient : NSObject {
    PLAssetsdClient *_assetsdClient;
}




+(id)sharedInstance;
-(void)getLibrarySizes:(id)arg0 ;
-(void)getLibrarySizesFromDB:(BOOL)arg0 handler:(id)arg1 ;


@end


#endif