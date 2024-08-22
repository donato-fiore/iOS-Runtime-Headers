// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLASSETSDPRIVACYSUPPORTSERVICE_H
#define PLASSETSDPRIVACYSUPPORTSERVICE_H

@class NSString;
@protocol PLAssetsdPrivacySupportServiceProtocol;

#import <Foundation/Foundation.h>

#import "PLAssetsdConnectionAuthorization.h"

@interface PLAssetsdPrivacySupportService : NSObject <PLAssetsdPrivacySupportServiceProtocol>

 {
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnectionAuthorization:(id)arg0 ;
-(void)presentLimitedLibraryPickerReprompt:(id)arg0 ;
-(void)setClientPrivacyOptions:(id)arg0 reply:(id)arg1 ;


@end


#endif