// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPRIVATESEARCHFORMEDIAINTENTDATA_H
#define INPRIVATESEARCHFORMEDIAINTENTDATA_H

@class NSArray, NSString;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INPrivateMediaIntentData.h"

@interface INPrivateSearchForMediaIntentData : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *audioSearchResults; // ivar: _audioSearchResults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *internalSignals; // ivar: _internalSignals
@property (readonly, copy, nonatomic) INPrivateMediaIntentData *privateMediaIntentData; // ivar: _privateMediaIntentData
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAudioSearchResults:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrivateMediaIntentData:(id)arg0 audioSearchResults:(id)arg1 ;
-(id)initWithPrivateMediaIntentData:(id)arg0 audioSearchResults:(id)arg1 internalSignals:(id)arg2 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif