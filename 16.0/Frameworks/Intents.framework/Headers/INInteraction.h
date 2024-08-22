// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ININTERACTION_H
#define ININTERACTION_H

@class NSUUID, CSSearchableItem, SAUISnippet, NSDate, NSDateInterval, NSString;
@protocol INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "INImage.h"
#import "INIntent.h"
#import "INIntentResponse.h"

@interface INInteraction : NSObject <INEnumerable, INInteractionExport, INImageProxyInjecting, INKeyImageProducing, NSSecureCoding, NSCopying>



@property (copy, nonatomic, setter=_setContextExtensionUUID:) NSUUID *_contextExtensionUUID; // ivar: _contextExtensionUUID
@property (nonatomic, setter=_setDonatedBySiri:) BOOL _donatedBySiri; // ivar: _donatedBySiri
@property (readonly) NSInteger _indexingHash;
@property (readonly) INImage *_keyImage;
@property (readonly, copy) CSSearchableItem *_searchableItem;
@property (retain, nonatomic, setter=_setSnippet:) SAUISnippet *_snippet; // ivar: _snippet
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger direction; // ivar: _direction
@property (copy, nonatomic) NSString *domainIdentifier;
@property (nonatomic) CGFloat duration;
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic, setter=_setIntent:) INIntent *intent; // ivar: _intent
@property (nonatomic) NSInteger intentHandlingStatus; // ivar: _intentHandlingStatus
@property (copy, nonatomic, setter=_setIntentResponse:) INIntentResponse *intentResponse; // ivar: _intentResponse
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)deleteAllInteractionsWithCompletion:(id)arg0 ;
+(void)deleteInteractionsWithGroupIdentifier:(id)arg0 completion:(id)arg1 ;
+(void)deleteInteractionsWithIdentifiers:(id)arg0 completion:(id)arg1 ;
+(void)initialize;
-(BOOL)_intents_enumerateObjectsOfClass:(Class)arg0 withBlock:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_compareSubProducerOne:(id)arg0 subProducerTwo:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_init;
-(id)_initWithIntent:(id)arg0 response:(id)arg1 ;
-(id)_searchableItemIncludingData:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIntent:(id)arg0 response:(id)arg1 ;
-(id)parameterValueForParameter:(id)arg0 ;
-(void)_commonInit;
-(void)_donateInteractionWithBundleId:(id)arg0 completion:(id)arg1 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)donateInteractionWithCompletion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif