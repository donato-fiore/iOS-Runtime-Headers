// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INNOTE_H
#define INNOTE_H

@class NSString, NSArray, NSDateComponents;
@protocol INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"

@interface INNote : NSObject <INImageProxyInjecting, INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic, setter=_setContents:) NSArray *contents; // ivar: _contents
@property (readonly, copy, nonatomic) NSDateComponents *createdDateComponents; // ivar: _createdDateComponents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INSpeakableString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSDateComponents *modifiedDateComponents; // ivar: _modifiedDateComponents
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INSpeakableString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 contents:(id)arg1 groupName:(id)arg2 createdDateComponents:(id)arg3 modifiedDateComponents:(id)arg4 identifier:(id)arg5 ;
-(id)initWithTitle:(id)arg0 contents:(id)arg1 groupName:(id)arg2 createdDateComponents:(id)arg3 modifiedDateComponents:(id)arg4 identifier:(id)arg5 accountIdentifier:(id)arg6 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif