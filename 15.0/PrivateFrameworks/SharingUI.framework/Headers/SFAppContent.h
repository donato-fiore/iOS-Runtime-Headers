// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAPPCONTENT_H
#define SFAPPCONTENT_H

@class AMSBag, LSApplicationProxy, NSString, NSDictionary, NSError, NSMutableArray, NSArray, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFLaunchRequest.h"

@interface SFAppContent : NSObject {
    AMSBag *_amsBag;
    ? _appIcon;
    LSApplicationProxy *_appProxy;
    NSString *_appName;
    NSDictionary *_amsArtworkDict;
    NSString *_amsLaunchURL;
    NSError *_amsResultsError;
    int _amsResultsState;
    NSMutableArray *_infoFetchRequests;
    SFLaunchRequest *_launchRequest;
}


@property (retain, nonatomic) NSArray *adamIDs; // ivar: _adamIDs
@property (retain, nonatomic) NSURL *amsURLOverride; // ivar: _amsURLOverride
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) BOOL installed;


-(id)_amsAppNameFromResult:(id)arg0 ;
-(id)_amsArtworkDictionaryFromResult:(id)arg0 ;
-(id)_amsFirstResponseDataItemFromResult:(id)arg0 ;
-(id)_amsLaunchURLFromResult:(id)arg0 ;
-(id)_launchOptions;
-(id)initWithAdamIDs:(id)arg0 ;
-(void)_amsFetchAppResultsWithCompletion:(id)arg0 ;
-(void)_amsFetchArtworkIfNeeded;
-(void)_amsFetchArtworkWithRequest:(id)arg0 ;
-(void)_amsFetchResults;
-(void)_amsLaunchIfNeeded;
-(void)_amsRun;
-(void)_fetchNameAndIconWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)_launchWithCompletion:(id)arg0 ;
-(void)fetchNameAndIconWithSize:(struct CGSize )arg0 completion:(id)arg1 ;
-(void)launchWithCompletion:(id)arg0 ;


@end


#endif