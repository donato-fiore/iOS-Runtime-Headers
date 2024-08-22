// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVOICEPROFILECONTEXT_H
#define CSVOICEPROFILECONTEXT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface CSVoiceProfileContext : NSObject

@property (retain, nonatomic) NSString *homeId; // ivar: _homeId
@property (retain, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (nonatomic) NSUInteger onboardType; // ivar: _onboardType
@property (retain, nonatomic) NSString *productCategory; // ivar: _productCategory
@property (retain, nonatomic) NSString *profileId; // ivar: _profileId
@property (retain, nonatomic) NSString *userName; // ivar: _userName
@property (retain, nonatomic) NSNumber *version; // ivar: _version


-(id)description;
-(id)initWithSharedSiriId:(id)arg0 languageCode:(id)arg1 productCategory:(id)arg2 version:(id)arg3 sharedHomeId:(id)arg4 userName:(id)arg5 ;


@end


#endif