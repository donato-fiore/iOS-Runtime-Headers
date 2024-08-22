// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EXQUERY_H
#define _EXQUERY_H

@class NSString, NSPredicate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _EXQuery : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSString *extensionPointIdentifier; // ivar: _extensionPointIdentifier
@property unsigned int platform; // ivar: _platform
@property (retain) NSPredicate *predicate; // ivar: _predicate


+(BOOL)supportsSecureCoding;
+(id)allExtensionsQuery;
+(id)asyncQueryQueue;
+(id)executeQueries:(id)arg0 ;
+(id)executeQuery:(id)arg0 ;
+(id)extensionPointIdentifierQuery:(id)arg0 ;
+(id)extensionPointIdentifierQuery:(id)arg0 platform:(unsigned int)arg1 ;
+(void)executeQueries:(id)arg0 completionHandler:(id)arg1 ;
+(void)executeQuery:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuery:(id)arg0 ;
-(BOOL)matches:(id)arg0 ;
-(BOOL)matchesRecord:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif