// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSPSEUDONYM_H
#define IDSPSEUDONYM_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, IDSDestinationProtocol;

#import <Foundation/Foundation.h>

#import "IDSURI.h"
#import "IDSPseudonymProperties.h"

@interface IDSPseudonym : NSObject <NSSecureCoding, IDSDestinationProtocol>



@property (readonly, nonatomic) IDSURI *URI; // ivar: _URI
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) IDSURI *maskedURI; // ivar: _maskedURI
@property (readonly, nonatomic) IDSPseudonymProperties *properties; // ivar: _properties
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPseudonym:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithURI:(id)arg0 maskedURI:(id)arg1 properties:(id)arg2 ;
-(id)withUpdatedProperties:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif