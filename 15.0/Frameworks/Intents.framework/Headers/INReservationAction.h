// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INRESERVATIONACTION_H
#define INRESERVATIONACTION_H

@class NSString, NSUserActivity;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INReservationAction : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSUserActivity *userActivity; // ivar: _userActivity
@property (readonly, copy, nonatomic) INDateComponentsRange *validDuration; // ivar: _validDuration


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 validDuration:(id)arg1 userActivity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif