// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRVOICEPROFILEMETACONTEXT_H
#define SSRVOICEPROFILEMETACONTEXT_H

@class NSString, NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface SSRVoiceProfileMetaContext : NSObject

@property (retain, nonatomic) NSString *appDomain; // ivar: _appDomain
@property (retain, nonatomic) NSDate *dateAdded; // ivar: _dateAdded
@property (retain, nonatomic) NSString *homeId; // ivar: _homeId
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (retain, nonatomic) NSNumber *pitch; // ivar: _pitch
@property (retain, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (retain, nonatomic) NSString *profileId; // ivar: _profileId
@property (retain, nonatomic) NSString *sharedSiriId; // ivar: _sharedSiriId
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) NSNumber *version; // ivar: _version


-(id)description;
-(id)initWithSharedSiriId:(id)arg0 languageCode:(id)arg1 productCategory:(id)arg2 version:(id)arg3 ;
-(id)initWithVoiceProfile:(id)arg0 ;


@end


#endif