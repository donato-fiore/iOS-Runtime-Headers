// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INFILEPROPERTY_H
#define INFILEPROPERTY_H

@class NSString, NSNumber;
@protocol INFilePropertyExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"
#import "INPerson.h"

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) INDateComponentsRange *dateComponentsRange; // ivar: _dateComponentsRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) INPerson *person; // ivar: _person
@property (readonly, copy, nonatomic) NSString *qualifier; // ivar: _qualifier
@property (readonly, copy, nonatomic) NSNumber *quantity; // ivar: _quantity
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 qualifier:(id)arg1 type:(id)arg2 dateComponentsRange:(id)arg3 person:(id)arg4 value:(id)arg5 quantity:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif