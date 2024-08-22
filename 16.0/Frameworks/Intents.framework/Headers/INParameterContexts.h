// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPARAMETERCONTEXTS_H
#define INPARAMETERCONTEXTS_H

@class NSDictionary, NSString;
@protocol INJSONSerializable;

#import <Foundation/Foundation.h>


@interface INParameterContexts : NSObject <INJSONSerializable>



@property (retain, nonatomic, setter=_setOperatorsDictionary:) NSDictionary *_operatorsDictionary; // ivar: _operatorsDictionary
@property (retain, nonatomic, setter=_setSuggestedValuesDictionary:) NSDictionary *_suggestedValuesDictionary; // ivar: _suggestedValuesDictionary
@property (retain, nonatomic, setter=_setTypedSuggestedValuesDictionary:) NSDictionary *_typedSuggestedValuesDictionary; // ivar: _typedSuggestedValuesDictionary
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)_isEmpty;
-(id)_initWithIntent:(id)arg0 decoder:(id)arg1 JSONDictionary:(id)arg2 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(void)_updateOperatorsForIntent:(id)arg0 JSONDictionary:(id)arg1 ;
-(void)_updateSuggestedValuesForIntent:(id)arg0 decoder:(id)arg1 JSONDictionary:(id)arg2 ;


@end


#endif