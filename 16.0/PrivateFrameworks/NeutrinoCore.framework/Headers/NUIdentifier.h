// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIDENTIFIER_H
#define NUIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NUVersion.h"

@interface NUIdentifier : NSObject <NSCopying>



@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *nameSpace; // ivar: _nameSpace
@property (readonly) NSString *stringRepresentation;
@property (readonly) NUVersion *version; // ivar: _version


+(BOOL)validateIdentifierString:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateIdentifierString:(id)arg0 space:(*id)arg1 name:(*id)arg2 version:(*id)arg3 error:(*id)arg4 ;
+(BOOL)validateName:(id)arg0 error:(*id)arg1 ;
+(BOOL)validateNameSpace:(id)arg0 error:(*id)arg1 ;
+(id)defaultNameSpace;
+(id)identifierRegularExpression;
+(id)identifierWithString:(id)arg0 error:(*id)arg1 ;
+(id)latestIdentifierWithName:(id)arg0 ;
+(id)latestIdentifierWithNameSpace:(id)arg0 name:(id)arg1 ;
+(id)validNameRegularExpression;
+(id)validNameSpaceRegularExpression;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToIdentifier:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)identifierWithVersion:(id)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 version:(id)arg1 ;
-(id)initWithNameSpace:(id)arg0 name:(id)arg1 version:(id)arg2 ;


@end


#endif