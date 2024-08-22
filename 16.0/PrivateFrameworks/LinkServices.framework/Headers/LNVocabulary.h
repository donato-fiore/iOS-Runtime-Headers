// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNVOCABULARY_H
#define LNVOCABULARY_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNVocabulary : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *term; // ivar: _term
@property (readonly, copy, nonatomic) NSDictionary *traits; // ivar: _traits


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTerm:(id)arg0 appSettingName:(id)arg1 ;
-(id)initWithTerm:(id)arg0 entityIdentifier:(id)arg1 ;
-(id)initWithTerm:(id)arg0 entityTypeName:(id)arg1 ;
-(id)initWithTerm:(id)arg0 traits:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif