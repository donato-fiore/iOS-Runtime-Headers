// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBMESSAGE_H
#define GPBMESSAGE_H

@class NSMutableDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "GPBUnknownFieldSet.h"
#import "GPBMessage.h"
#import "GPBFieldDescriptor.h"
#import "GPBExtensionDescriptor.h"

@interface GPBMessage : NSObject <NSSecureCoding, NSCopying>

 {
    GPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    GPBMessage *autocreator_;
    GPBFieldDescriptor *autocreatorField_;
    GPBExtensionDescriptor *autocreatorExtension_;
    uint8_t readOnlySemaphore_;
    *GPBMessage_Storage messageStorage_;
}


@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;
@property (copy, nonatomic) GPBUnknownFieldSet *unknownFields;


+(BOOL)accessInstanceVariablesDirectly;
+(BOOL)resolveClassMethod:(SEL)arg0 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)descriptor;
+(id)message;
+(id)parseDelimitedFromCodedInputStream:(id)arg0 extensionRegistry:(id)arg1 error:(*id)arg2 ;
+(id)parseFromCodedInputStream:(id)arg0 extensionRegistry:(id)arg1 error:(*id)arg2 ;
+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
+(id)parseFromData:(id)arg0 extensionRegistry:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)hasExtension:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseUnknownField:(id)arg0 extensionRegistry:(id)arg1 tag:(unsigned int)arg2 ;
-(NSUInteger)hash;
-(NSUInteger)serializedSize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)data;
-(id)delimitedData;
-(id)description;
-(id)descriptor;
-(id)extensionsCurrentlySet;
-(id)getExistingExtension:(id)arg0 ;
-(id)getExtension:(id)arg0 ;
-(id)init;
-(id)initWithCodedInputStream:(id)arg0 extensionRegistry:(id)arg1 error:(*id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 extensionRegistry:(id)arg1 error:(*id)arg2 ;
-(void)addExtension:(id)arg0 value:(id)arg1 ;
-(void)addUnknownMapEntry:(int)arg0 value:(id)arg1 ;
-(void)clear;
-(void)clearExtension:(id)arg0 ;
-(void)copyFieldsInto:(id)arg0 zone:(struct _NSZone *)arg1 descriptor:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)internalClear:(BOOL)arg0 ;
-(void)mergeDelimitedFromCodedInputStream:(id)arg0 extensionRegistry:(id)arg1 ;
-(void)mergeFrom:(id)arg0 ;
-(void)mergeFromCodedInputStream:(id)arg0 extensionRegistry:(id)arg1 ;
-(void)mergeFromData:(id)arg0 extensionRegistry:(id)arg1 ;
-(void)parseMessageSet:(id)arg0 extensionRegistry:(id)arg1 ;
-(void)setExtension:(id)arg0 index:(NSUInteger)arg1 value:(id)arg2 ;
-(void)setExtension:(id)arg0 value:(id)arg1 ;
-(void)writeDelimitedToCodedOutputStream:(id)arg0 ;
-(void)writeDelimitedToOutputStream:(id)arg0 ;
-(void)writeExtensionsToCodedOutputStream:(id)arg0 range:(struct GPBExtensionRange )arg1 sortedExtensions:(id)arg2 ;
-(void)writeField:(id)arg0 toCodedOutputStream:(id)arg1 ;
-(void)writeToCodedOutputStream:(id)arg0 ;
-(void)writeToOutputStream:(id)arg0 ;


@end


#endif