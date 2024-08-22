// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCOLLECTIONPUBLISHERATTRIBUTION_H
#define _GEOCOLLECTIONPUBLISHERATTRIBUTION_H

@class NSString, NSURL;
@protocol GEOCollectionPublisherAttribution;

#import <Foundation/Foundation.h>


@interface _GEOCollectionPublisherAttribution : NSObject <GEOCollectionPublisherAttribution>



@property (readonly, nonatomic) NSString *applicationAdamId; // ivar: _applicationAdamId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int iconIdentifier; // ivar: _iconIdentifier
@property (readonly, nonatomic) unsigned int logoCenteredColorizedIdentifier; // ivar: _logoCenteredColorizedIdentifier
@property (readonly, nonatomic) unsigned int logoCenteredIdentifier; // ivar: _logoCenteredIdentifier
@property (readonly, nonatomic) unsigned int logoIdentifier; // ivar: _logoIdentifier
@property (readonly, nonatomic) unsigned int logoWithoutPaddingIdentifier; // ivar: _logoWithoutPaddingIdentifier
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *themeColorDarkMode; // ivar: _themeColorDarkMode
@property (readonly, nonatomic) NSString *themeColorLightMode; // ivar: _themeColorLightMode
@property (readonly, nonatomic) NSURL *websiteURL; // ivar: _websiteURL


-(id)initWithPublisherAttributionSource:(id)arg0 preferredLanguages:(id)arg1 ;


@end


#endif