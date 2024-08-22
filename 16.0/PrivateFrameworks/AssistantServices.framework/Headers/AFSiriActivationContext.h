// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSIRIACTIVATIONCONTEXT_H
#define AFSIRIACTIVATIONCONTEXT_H

@class NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFSiriActivationContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSInteger event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTimestamp:(NSUInteger)arg0 source:(NSInteger)arg1 event:(NSInteger)arg2 options:(NSUInteger)arg3 deviceID:(id)arg4 userInfo:(id)arg5 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif