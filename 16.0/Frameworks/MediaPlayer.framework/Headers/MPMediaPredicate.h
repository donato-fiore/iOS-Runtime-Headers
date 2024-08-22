// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIAPREDICATE_H
#define MPMEDIAPREDICATE_H

@class NSString;
@protocol MPPProtobufferCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MPMediaPredicate : NSObject <MPPProtobufferCoding, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateEntity:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 ;
-(id)initWithProtobufferDecodableObject:(id)arg0 library:(id)arg1 ;
-(id)protobufferEncodableObject;
-(id)protobufferEncodableObjectFromLibrary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif