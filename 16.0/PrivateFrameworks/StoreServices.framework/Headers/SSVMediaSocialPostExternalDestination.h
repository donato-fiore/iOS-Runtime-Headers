// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVMEDIASOCIALPOSTEXTERNALDESTINATION_H
#define SSVMEDIASOCIALPOSTEXTERNALDESTINATION_H

@class NSString;
@protocol NSCopying, SSXPCCoding;

#import <Foundation/Foundation.h>


@interface SSVMediaSocialPostExternalDestination : NSObject <NSCopying, SSXPCCoding>



@property (copy, nonatomic) NSString *accessToken; // ivar: _accessToken
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *pageAccessToken; // ivar: _pageAccessToken
@property (copy, nonatomic) NSString *pageIdentifier; // ivar: _pageIdentifier
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg0 ;


@end


#endif