// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INSPATIALEVENTTRIGGER_H
#define INSPATIALEVENTTRIGGER_H

@class NSString, CLPlacemark, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INSpatialEventTrigger : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger mobileSpace; // ivar: _mobileSpace
@property (readonly, copy, nonatomic) CLPlacemark *placemark; // ivar: _placemark
@property (readonly, copy, nonatomic) NSArray *suggestedValues; // ivar: _suggestedValues
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMobileSpace:(NSInteger)arg0 event:(NSInteger)arg1 ;
-(id)initWithPlacemark:(id)arg0 event:(NSInteger)arg1 ;
-(id)initWithPlacemark:(id)arg0 event:(NSInteger)arg1 suggestedValues:(id)arg2 mobileSpace:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif