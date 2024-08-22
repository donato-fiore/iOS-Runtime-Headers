// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDYNAMICOPTIONSRESULT_H
#define LNDYNAMICOPTIONSRESULT_H

@class LNStaticDeferredLocalizedString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNDynamicOptionsResult : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) LNStaticDeferredLocalizedString *promptLabel; // ivar: _promptLabel
@property (readonly, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) BOOL usesIndexedCollation; // ivar: _usesIndexedCollation


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSections:(id)arg0 usesIndexedCollation:(BOOL)arg1 promptLabel:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif