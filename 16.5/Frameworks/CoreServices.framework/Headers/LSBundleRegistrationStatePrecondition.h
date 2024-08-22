// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSBUNDLEREGISTRATIONSTATEPRECONDITION_H
#define LSBUNDLEREGISTRATIONSTATEPRECONDITION_H

@class NSString, NSNumber;


#import "LSPrecondition.h"

@interface LSBundleRegistrationStatePrecondition : LSPrecondition {
    NSString *_bundleID;
    NSNumber *_placeholderInstalled;
    NSNumber *_fullAppInstalled;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isMet;
-(id)description;
-(id)initForBundleWithIdentifier:(id)arg0 placeholderInstalled:(id)arg1 fullApplicationInstalled:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif