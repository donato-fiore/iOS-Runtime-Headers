// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INPERSONHANDLE_H
#define INPERSONHANDLE_H

@class NSString;
@protocol INPersonHandleExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger emergencyType; // ivar: _emergencyType
@property (readonly, nonatomic) NSInteger faceTimeType; // ivar: _faceTimeType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested; // ivar: _suggested
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 emergencyType:(NSInteger)arg3 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 emergencyType:(NSInteger)arg3 faceTimeType:(NSInteger)arg4 suggested:(BOOL)arg5 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 emergencyType:(NSInteger)arg3 suggested:(BOOL)arg4 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 faceTimeType:(NSInteger)arg3 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 label:(id)arg2 suggested:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif