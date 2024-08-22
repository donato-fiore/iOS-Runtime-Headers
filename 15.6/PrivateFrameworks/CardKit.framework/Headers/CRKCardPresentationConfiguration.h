// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCARDPRESENTATIONCONFIGURATION_H
#define CRKCARDPRESENTATIONCONFIGURATION_H

@class CRSCardRequest;
@protocol CRContent;

#import <Foundation/Foundation.h>


@interface CRKCardPresentationConfiguration : NSObject

@property (readonly, nonatomic) CRSCardRequest *cardRequest; // ivar: _cardRequest
@property (readonly, nonatomic) NSObject<CRContent> *content;
@property (nonatomic) BOOL loadsBundleProviders; // ivar: _loadsBundleProviders
@property (nonatomic) BOOL respectsUserConsent; // ivar: _respectsUserConsent


-(id)initWithCard:(id)arg0 ;
-(id)initWithCardRequest:(id)arg0 ;
-(id)initWithContent:(id)arg0 ;


@end


#endif