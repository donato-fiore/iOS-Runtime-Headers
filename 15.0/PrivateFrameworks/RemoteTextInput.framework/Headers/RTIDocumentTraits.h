// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTIDOCUMENTTRAITS_H
#define RTIDOCUMENTTRAITS_H

@class NSIndexSet, NSString, NSArray, NSDictionary, TITextInputTraits;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTIDocumentTraits : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSIndexSet *PINEntrySeparatorIndexes; // ivar: _PINEntrySeparatorIndexes
@property (copy, nonatomic) NSString *appId; // ivar: _appId
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (retain, nonatomic) NSArray *associatedDomains; // ivar: _associatedDomains
@property (retain, nonatomic) NSDictionary *autofillContext; // ivar: _autofillContext
@property (nonatomic) NSUInteger autofillMode; // ivar: _autofillMode
@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (copy, nonatomic) NSString *localizedAppName; // ivar: _localizedAppName
@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic) TITextInputTraits *textInputTraits; // ivar: _textInputTraits
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) _NSRange validTextRange; // ivar: _validTextRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)copyContextualPropertiesFromDocumentTraits:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif