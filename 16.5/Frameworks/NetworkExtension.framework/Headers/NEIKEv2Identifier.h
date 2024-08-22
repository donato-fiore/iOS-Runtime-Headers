// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2IDENTIFIER_H
#define NEIKEV2IDENTIFIER_H

@class NSData, NSString;
@protocol NEPrettyDescription, NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2Identifier : NSObject <NEPrettyDescription, NSCopying>



@property (retain) NSData *identifierData; // ivar: _identifierData
@property (readonly) NSUInteger identifierType;
@property (readonly) NSString *stringValue;


+(id)copyTypeDescription;
+(id)createIdentifierWithType:(NSUInteger)arg0 data:(id)arg1 ;
+(id)createIdentifierWithType:(NSUInteger)arg0 data:(id)arg1 zone:(struct _NSZone *)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyShortDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;


@end


#endif