// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFREQUESTHANDLINGCONTEXT_H
#define AFREQUESTHANDLINGCONTEXT_H

@class NSString;
@protocol NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFRequestHandlingContext : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *inputAssistantID; // ivar: _inputAssistantID
@property (readonly, copy, nonatomic) NSString *inputDeviceID; // ivar: _inputDeviceID
@property (readonly, copy, nonatomic) NSString *requestID; // ivar: _requestID
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithRequestID:(id)arg0 inputDeviceID:(id)arg1 inputAssistantID:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif