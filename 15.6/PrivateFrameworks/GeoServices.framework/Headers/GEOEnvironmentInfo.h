// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOENVIRONMENTINFO_H
#define GEOENVIRONMENTINFO_H

@class NSData, NSDictionary, NSProgress, NSString, NSError;

#import <Foundation/Foundation.h>

#import "GEOResourceManifestDownload.h"

@interface GEOEnvironmentInfo : NSObject {
    NSData *_manifestData;
    NSDictionary *_originalDictionaryRepresentation;
}


@property (readonly, nonatomic) NSProgress *activationProgress; // ivar: _activationProgress
@property (readonly, nonatomic) NSString *actualName; // ivar: _actualName
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSError *lastLoadingError; // ivar: _lastLoadingError
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *releaseName; // ivar: _releaseName
@property (readonly, nonatomic) GEOResourceManifestDownload *resourceManifest;
@property (readonly, nonatomic) NSInteger state; // ivar: _state


-(BOOL)isActive;
-(id)_manifestURLString;
-(id)initWithName:(id)arg0 displayName:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(id)overrideURLs;
-(id)serviceURLs;
-(id)urlDictionary;
-(id)useProxyAuth;
-(void)_performActivation;
-(void)makeActive;
-(void)reloadManifestDataWithCompletionHandler:(id)arg0 ;
-(void)updateWithURLs:(id)arg0 ;


@end


#endif