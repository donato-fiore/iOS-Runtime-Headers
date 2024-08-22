// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCINTENTDEFINITIONMANAGER_H
#define VCINTENTDEFINITIONMANAGER_H

@class NSString;
@protocol INVCIntentDefinitionManager;

#import <Foundation/Foundation.h>


@interface VCIntentDefinitionManager : NSObject <INVCIntentDefinitionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allBundleIdentifiers;
+(id)appInfoForBundleID:(id)arg0 ;
+(id)intentDefinitionBundleURLForBundleID:(id)arg0 ;
+(id)intentDefinitionURLsForBundleID:(id)arg0 ;
+(id)intentDefinitionURLsForBundleID:(id)arg0 inDirectory:(id)arg1 ;


@end


#endif