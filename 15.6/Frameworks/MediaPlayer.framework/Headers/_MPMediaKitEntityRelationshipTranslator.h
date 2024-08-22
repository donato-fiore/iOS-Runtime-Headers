// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPMEDIAKITENTITYRELATIONSHIPTRANSLATOR_H
#define _MPMEDIAKITENTITYRELATIONSHIPTRANSLATOR_H

@class MPKeyPathEntityRelationshipTranslator, NSString;



@interface _MPMediaKitEntityRelationshipTranslator : MPKeyPathEntityRelationshipTranslator

@property (copy, nonatomic) NSString *mediaKitType; // ivar: _mediaKitType
@property (readonly, nonatomic) id *payloadTransformBlock; // ivar: _payloadTransformBlock


-(id)initWithRelatedMPModelClass:(Class)arg0 mediaKitType:(id)arg1 payloadTransformBlock:(id)arg2 ;
-(id)prepareSource:(id)arg0 context:(id)arg1 ;


@end


#endif