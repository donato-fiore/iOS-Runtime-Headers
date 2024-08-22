// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGGENERICMESSAGE_H
#define PKSHARINGGENERICMESSAGE_H

@class NSDictionary;


#import "PKSharingMessage.h"

@interface PKSharingGenericMessage : PKSharingMessage

@property (readonly, nonatomic) NSDictionary *appleSharingDict; // ivar: _appleSharingDict
@property (readonly, nonatomic) NSDictionary *genericSharingDict; // ivar: _genericSharingDict


+(BOOL)supportsSecureCoding;
+(id)_contentForGenericSharingDict:(id)arg0 appleSharingDict:(id)arg1 format:(NSUInteger)arg2 ;
-(BOOL)configureWithContent:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharingGenericMessage:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)embeddedMessageURLs;
-(id)initWithFormat:(NSUInteger)arg0 type:(NSUInteger)arg1 genericSharingDict:(id)arg2 appleSharingDict:(id)arg3 ;
-(id)initWithFormat:(NSUInteger)arg0 type:(NSUInteger)arg1 genericSharingDict:(id)arg2 appleSharingDict:(id)arg3 displayInformation:(id)arg4 ;
-(id)initWithVertical:(NSUInteger)arg0 type:(NSUInteger)arg1 genericSharingDict:(id)arg2 appleSharingDict:(id)arg3 ;
-(void)addEmbeddedMessages:(id)arg0 ;


@end


#endif