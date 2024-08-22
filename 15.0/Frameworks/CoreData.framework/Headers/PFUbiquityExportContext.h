// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFUBIQUITYEXPORTCONTEXT_H
#define PFUBIQUITYEXPORTCONTEXT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "PFUbiquityLocation.h"

@interface PFUbiquityExportContext : NSObject {
    NSMutableDictionary *_storeNameToStoreExportContext;
    NSMutableDictionary *_ubiquityRootPathToStack;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    BOOL _useLocalStorage;
}




-(id)description;
-(id)initWithLocalPeerID:(id)arg0 andUbiquityRootLocation:(id)arg1 ;
-(void)dealloc;


@end


#endif