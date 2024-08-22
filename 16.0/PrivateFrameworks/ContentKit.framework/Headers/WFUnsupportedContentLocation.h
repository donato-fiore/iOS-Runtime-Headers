// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUNSUPPORTEDCONTENTLOCATION_H
#define WFUNSUPPORTEDCONTENTLOCATION_H

@class NSDictionary, NSString;
@protocol NSSecureCoding, NSCopying, WFSerializableContent;


#import "WFContentLocation.h"

@interface WFUnsupportedContentLocation : WFContentLocation <NSSecureCoding, NSCopying, WFSerializableContent>



@property (readonly, nonatomic) NSDictionary *backingSerializedRepresentation; // ivar: _backingSerializedRepresentation
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)locationWithIdentifier:(id)arg0 serializedRepresentation:(id)arg1 ;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 serializedRepresentation:(id)arg1 ;
-(id)localizedTitle;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif