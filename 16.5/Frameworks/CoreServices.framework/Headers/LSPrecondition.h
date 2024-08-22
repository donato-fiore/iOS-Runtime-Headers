// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSPRECONDITION_H
#define LSPRECONDITION_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSPrecondition : NSObject <NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)emptyPrecondition;
+(id)registrationStatePreconditionForBundleWithIdentifier:(id)arg0 placeholderInstalled:(id)arg1 fullApplicationInstalled:(id)arg2 ;
-(BOOL)isMet;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif