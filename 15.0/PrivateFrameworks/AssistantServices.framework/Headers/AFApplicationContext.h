// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AFAPPLICATIONCONTEXT_H
#define AFAPPLICATIONCONTEXT_H

@class AceObject, NSArray, NSString, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AFBulletin.h"

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) AceObject *aceContext; // ivar: _aceContext
@property (readonly, copy, nonatomic) NSArray *aceContexts; // ivar: _aceContexts
@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier; // ivar: _associatedBundleIdentifier
@property (readonly, copy, nonatomic) AFBulletin *bulletin; // ivar: _bulletin
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary; // ivar: _contextDictionary


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAssociatedBundleIdentifier:(id)arg0 bulletin:(id)arg1 aceContext:(id)arg2 contextDictionary:(id)arg3 aceContexts:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif