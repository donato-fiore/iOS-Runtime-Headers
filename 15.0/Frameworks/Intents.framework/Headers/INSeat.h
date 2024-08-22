// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSEAT_H
#define INSEAT_H

@class NSString;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INSeat : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *seatNumber; // ivar: _seatNumber
@property (readonly, copy, nonatomic) NSString *seatRow; // ivar: _seatRow
@property (readonly, copy, nonatomic) NSString *seatSection; // ivar: _seatSection
@property (readonly, copy, nonatomic) NSString *seatingType; // ivar: _seatingType
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSeatSection:(id)arg0 seatRow:(id)arg1 seatNumber:(id)arg2 seatingType:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif