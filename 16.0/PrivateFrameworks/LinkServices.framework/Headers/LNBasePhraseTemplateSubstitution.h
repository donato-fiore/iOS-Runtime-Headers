// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNBASEPHRASETEMPLATESUBSTITUTION_H
#define LNBASEPHRASETEMPLATESUBSTITUTION_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNBasePhraseTemplateSubstitution : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *basePhraseTemplate; // ivar: _basePhraseTemplate
@property (readonly, copy, nonatomic) NSArray *parameterSubstitutions; // ivar: _parameterSubstitutions


+(BOOL)supportsSecureCoding;
-(id)initWithBasePhraseTemplate:(id)arg0 parameterSubstitutions:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif