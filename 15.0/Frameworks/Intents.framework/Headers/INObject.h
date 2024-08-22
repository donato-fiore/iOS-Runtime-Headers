// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INOBJECT_H
#define INOBJECT_H

@class NSMutableDictionary, NSArray, NSString;
@protocol INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INImage.h"

@interface INObject : NSObject <INRuntimeObject, INJSONSerializable, INSpeakable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *_valueForKeyDictionary; // ivar: _valueForKeyDictionary
@property (retain, nonatomic) NSArray *alternativeSpeakableMatches; // ivar: _alternativeSpeakableMatches
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionString;
@property (retain, nonatomic) INImage *displayImage; // ivar: _displayImage
@property (readonly, copy, nonatomic) NSString *displayString; // ivar: _displayString
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *pronunciationHint; // ivar: _pronunciationHint
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (copy, nonatomic) NSString *subtitleString; // ivar: _subtitleString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setValue:(id)arg0 forProperty:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_displayImageWithLocalizer:(id)arg0 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_localizedCopyWithLocalizer:(id)arg0 ;
-(id)_intents_readableSubtitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 subtitleString:(id)arg3 displayImage:(id)arg4 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 subtitleString:(id)arg2 displayImage:(id)arg3 ;
-(id)valueForProperty:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif