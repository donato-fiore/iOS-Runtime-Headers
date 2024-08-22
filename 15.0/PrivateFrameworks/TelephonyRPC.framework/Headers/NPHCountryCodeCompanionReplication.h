// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPHCOUNTRYCODECOMPANIONREPLICATION_H
#define NPHCOUNTRYCODECOMPANIONREPLICATION_H

@class NPSManager;

#import <Foundation/Foundation.h>


@interface NPHCountryCodeCompanionReplication : NSObject {
    NPSManager *_npsManager;
}




-(id)init;
-(void)_updateActiveCountryCode;
-(void)_updateAndBroadcastCodeWithKey:(id)arg0 usingFunction:(*unk)arg1 ;
-(void)_updateHomeCountryCode;
-(void)_updateNetworkCountryCode;
-(void)dealloc;


@end


#endif