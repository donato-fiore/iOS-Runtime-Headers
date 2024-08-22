// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITEXTINPUTTRAITS_H
#define TITEXTINPUTTRAITS_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TITextInputTraits : NSObject <NSCopying, NSSecureCoding>

 {
    ? _mask;
}


@property (nonatomic) NSUInteger autocapitalizationType;
@property (nonatomic) NSUInteger autocorrectionType;
@property (nonatomic) BOOL disablePrediction;
@property (nonatomic) BOOL enablesReturnKeyAutomatically;
@property (nonatomic) NSUInteger keyboardAppearance;
@property (nonatomic) NSUInteger keyboardType;
@property (copy, nonatomic) NSString *recentInputIdentifier; // ivar: _recentInputIdentifier
@property (nonatomic) NSUInteger returnKeyType;
@property (nonatomic) BOOL secureTextEntry;
@property (nonatomic) BOOL smartDashesEnabled;
@property (nonatomic) NSUInteger smartDashesType;
@property (nonatomic) BOOL smartInsertDeleteEnabled;
@property (nonatomic) NSUInteger smartInsertDeleteType;
@property (nonatomic) BOOL smartQuotesEnabled;
@property (nonatomic) NSUInteger smartQuotesType;
@property (nonatomic) NSUInteger spellCheckingType;
@property (copy, nonatomic) NSString *textContentType; // ivar: _textContentType
@property (nonatomic) NSUInteger textScriptType;
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif