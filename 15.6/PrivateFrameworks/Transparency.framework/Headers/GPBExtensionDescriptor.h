// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GPBEXTENSIONDESCRIPTOR_H
#define GPBEXTENSIONDESCRIPTOR_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "GPBEnumDescriptor.h"

@interface GPBExtensionDescriptor : NSObject <NSCopying>

 {
    *GPBExtensionDescription description_;
    NSData""valueString"@"NSString""valueMessage"@"GPBMessage""valueEnum"i defaultValue_;
}


@property (readonly, nonatomic) int alternateWireType;
@property (readonly, nonatomic) Class containingMessageClass;
@property (readonly, nonatomic) unsigned char dataType;
@property (readonly, nonatomic) id *defaultValue;
@property (readonly, nonatomic) GPBEnumDescriptor *enumDescriptor;
@property (readonly, nonatomic) unsigned int fieldNumber;
@property (readonly, nonatomic) Class msgClass;
@property (readonly, nonatomic, getter=isPackable) BOOL packable;
@property (readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property (readonly, nonatomic) NSString *singletonName;
@property (readonly, nonatomic) int wireType;


-(NSInteger)compareByFieldNumber:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithExtensionDescription:(struct GPBExtensionDescription *)arg0 ;
-(id)initWithExtensionDescription:(struct GPBExtensionDescription *)arg0 usesClassRefs:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif