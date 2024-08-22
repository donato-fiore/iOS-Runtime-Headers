// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REELEMENT_H
#define REELEMENT_H

@class NSString, NSArray;
@protocol REAutomaticExportedInterface, NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "REElementAction.h"
#import "REContent.h"

@interface REElement : NSObject <REAutomaticExportedInterface, NSCopying, NSCoding>



@property (readonly, nonatomic) REElementAction *action; // ivar: _action
@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) REContent *content; // ivar: _content
@property (readonly, nonatomic) REContent *idealizedContent; // ivar: _idealizedContent
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger privacyBehavior; // ivar: _privacyBehavior
@property (readonly, nonatomic) NSArray *relevanceProviders; // ivar: _relevanceProviders


+(id)_supportedDictionaryEncodingKeys;
-(BOOL)_relevanceProvidersEqualToElement:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNoContentElement;
-(NSUInteger)hash;
-(id)copyElementWithUpdatedRelevanceProviders:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryEncodingWithRelevanceProviderGenerator:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 relevanceProviderGenerator:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 content:(id)arg1 action:(id)arg2 relevanceProviders:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 content:(id)arg1 action:(id)arg2 relevanceProviders:(id)arg3 privacyBehavior:(NSUInteger)arg4 ;
-(id)initWithIdentifier:(id)arg0 content:(id)arg1 idealizedContent:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 content:(id)arg1 idealizedContent:(id)arg2 action:(id)arg3 relevanceProviders:(id)arg4 privacyBehavior:(NSUInteger)arg5 ;
-(id)shallowCopy;
-(void)_updateIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeContent;


@end


#endif