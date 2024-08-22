// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRINLUREFERENCECONTEXT_H
#define SIRINLUREFERENCECONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SIRINLUReferenceContext : NSObject <NSSecureCoding>



@property (nonatomic) BOOL contextualReference; // ivar: _contextualReference
@property (nonatomic) BOOL disambiguationNeeded; // ivar: _disambiguationNeeded


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextualReference:(BOOL)arg0 DisambiguationNeeded:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif