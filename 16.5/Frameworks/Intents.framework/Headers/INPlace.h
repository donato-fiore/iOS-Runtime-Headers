// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPLACE_H
#define INPLACE_H

@class NSString, NSArray;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INPlace : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger personalPlaceType; // ivar: _personalPlaceType
@property (readonly, copy, nonatomic) NSArray *placeDescriptors; // ivar: _placeDescriptors
@property (readonly, copy, nonatomic) NSString *placeSubType; // ivar: _placeSubType
@property (readonly, copy, nonatomic) NSString *placeType; // ivar: _placeType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPlaceType:(id)arg0 placeSubType:(id)arg1 placeDescriptors:(id)arg2 personalPlaceType:(NSInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif