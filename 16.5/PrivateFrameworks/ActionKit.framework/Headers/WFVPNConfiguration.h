// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFVPNCONFIGURATION_H
#define WFVPNCONFIGURATION_H

@class INAppDescriptor, NSString, NSUUID;
@protocol WFSerializableContent, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFVPNConfiguration : NSObject <WFSerializableContent, NSSecureCoding>



@property (readonly, nonatomic) INAppDescriptor *appDescriptor; // ivar: _appDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 appDescriptor:(id)arg2 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif