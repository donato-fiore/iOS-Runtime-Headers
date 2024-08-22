// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBFIELDDESCRIPTOR_H
#define TRIPBFIELDDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TRIPBOneofDescriptor.h"
#import "TRIPBEnumDescriptor.h"

@interface TRIPBFieldDescriptor : NSObject {
    *TRIPBMessageFieldDescription description_;
    SEL getSel_;
    SEL setSel_;
    SEL hasOrCountSel_;
    SEL setHasSel_;
    NSData""valueString"@"NSString""valueMessage"@"TRIPBMessage""valueEnum"i defaultValue_;
    TRIPBEnumDescriptor""enumVerifier_"^? enumHandling_;
}


@property (readonly, nonatomic) TRIPBOneofDescriptor *containingOneof; // ivar: containingOneof_
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) unk defaultValue;
@property (readonly, nonatomic) TRIPBEnumDescriptor *enumDescriptor;
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
-(id)initWithFieldDescription:(*void)arg0 includesDefault:(BOOL)arg1 syntax:(unsigned char)arg2 ;
-(id)textFormatName;
-(void)dealloc;


@end


#endif