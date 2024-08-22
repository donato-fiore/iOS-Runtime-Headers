// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRISPOTLIGHTCONTEXT_H
#define SIRISPOTLIGHTCONTEXT_H

@class NSString;


#import "SiriContext.h"

@interface SiriSpotlightContext : SiriContext

@property (nonatomic) NSInteger source; // ivar: _source
@property (copy, nonatomic) NSString *utteranceText; // ivar: _utteranceText


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif