// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXQUERY_H
#define _EXQUERY_H

@class NSString, NSArray, NSPredicate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _EXQuery : NSObject <NSSecureCoding, NSCopying>



@property (retain) NSString *extensionPointIdentifier;
@property (readonly) NSArray *extensionPointRecords; // ivar: _extensionPointRecords
@property ? hostAuditToken;
@property (nonatomic) BOOL includePostprocessing; // ivar: _includePostprocessing
@property unsigned int platform;
@property (retain) NSPredicate *predicate;
@property NSUInteger resultType; // ivar: _resultType


+(BOOL)supportsSecureCoding;
+(id)allExtensionsQuery;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)executeQueries:(id)arg0 ;
+(id)executeQuery:(id)arg0 ;
+(id)extensionPointIdentifierQuery:(id)arg0 ;
+(id)extensionPointIdentifierQuery:(id)arg0 platform:(unsigned int)arg1 ;
+(void)executeQueries:(id)arg0 completionHandler:(id)arg1 ;
+(void)executeQuery:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)matches:(id)arg0 ;
-(BOOL)matchesRecord:(id)arg0 ;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExtensionPoint:(id)arg0 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 platform:(unsigned int)arg1 ;
-(id)initWithExtensionPointIdentifier:(id)arg0 predicate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif