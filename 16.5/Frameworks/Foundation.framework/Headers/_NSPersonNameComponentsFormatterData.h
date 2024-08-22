// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSPERSONNAMECOMPONENTSFORMATTERDATA_H
#define _NSPERSONNAMECOMPONENTSFORMATTERDATA_H

@class NPNameParser, NSLocale;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _NSPersonNameComponentsFormatterData : NSObject <NSCopying, NSSecureCoding>

 {
    NPNameParser *_nameParser;
}


@property BOOL forceFamilyNameFirst; // ivar: _forceFamilyNameFirst
@property BOOL forceGivenNameFirst; // ivar: _forceGivenNameFirst
@property BOOL ignoresFallbacks; // ivar: _ignoresFallbacks
@property (copy) NSLocale *locale; // ivar: _locale
@property BOOL phonetic; // ivar: _phonetic
@property NSInteger style; // ivar: _style


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif