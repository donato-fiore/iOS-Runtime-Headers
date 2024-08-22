// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBFIELDDESCRIPTOR_H
#define GPBFIELDDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GPBOneofDescriptor.h"
#import "GPBEnumDescriptor.h"

@interface GPBFieldDescriptor : NSObject {
    *GPBMessageFieldDescription description_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    NSData""valueString"@"NSString""valueMessage"@"GPBMessage""valueEnum"i defaultValue_;
    GPBEnumDescriptor""enumVerifier_"^? enumHandling_;
}


@property (readonly, nonatomic) GPBOneofDescriptor *containingOneof; // ivar: containingOneof_
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) unk defaultValue;
@property (readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) unsigned char fieldType;
@property (readonly, nonatomic) BOOL hasDefaultValue;
@property (readonly, nonatomic) unsigned char mapKeyDataType;
@property (readonly, nonatomic) Class msgClass; // ivar: msgClass_
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int number;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic, getter=isRequired) BOOL required;


-(BOOL)isValidEnumValue:(int)arg0 ;
-(id)init;
-(id)initWithFieldDescription:(*void)arg0 includesDefault:(BOOL)arg1 usesClassRefs:(BOOL)arg2 proto3OptionalKnown:(BOOL)arg3 syntax:(unsigned char)arg4 ;
-(id)textFormatName;
-(void)dealloc;


@end


#endif