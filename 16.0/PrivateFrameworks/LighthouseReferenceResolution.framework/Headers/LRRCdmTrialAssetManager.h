// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LRRCDMTRIALASSETMANAGER_H
#define LRRCDMTRIALASSETMANAGER_H

@class TRIClient, NSArray, NSDictionary, NSLocale;

#import <Foundation/Foundation.h>


@interface LRRCdmTrialAssetManager : NSObject {
    TRIClient *_nlTRIClient;
    NSArray *_namespaces;
    NSDictionary *_trialCompatibilityVersions;
    NSDictionary *_trialIdentifiers;
}


@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale


-(id)fetchCompatibilityVersion;
-(id)fetchRolloutStatus;
-(id)fetchRolloutStatusForNamespace:(id)arg0 ;
-(id)getAssetInfo:(id)arg0 ;
-(id)initWithLocale:(id)arg0 forNamespaces:(id)arg1 ;
-(unsigned int)fetchCompatibilityVersionForNamespace:(id)arg0 ;
-(void)initTRIClient;


@end


#endif