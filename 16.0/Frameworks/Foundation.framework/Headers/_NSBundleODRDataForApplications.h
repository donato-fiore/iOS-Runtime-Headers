// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSBUNDLEODRDATAFORAPPLICATIONS_H
#define _NSBUNDLEODRDATAFORAPPLICATIONS_H

@class NSBundleODRDataCommon, NSDictionary, NSMutableSet;
@protocol OS_dispatch_group;


#import "NSError.h"
#import "NSString.h"

@interface _NSBundleODRDataForApplications : NSBundleODRDataCommon {
    NSDictionary *_tagToTagState;
    NSMutableSet *_extensionConnections;
    NSError *_stashedError;
    NSObject<OS_dispatch_group> *_initialStateGroup;
    NSString *_rootSandboxPath;
}




-(BOOL)assetPacksBecameAvailable:(id)arg0 error:(*id)arg1 ;
-(BOOL)assetPacksBecameUnavailable:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithBundle:(id)arg0 ;
-(void)dealloc;


@end


#endif