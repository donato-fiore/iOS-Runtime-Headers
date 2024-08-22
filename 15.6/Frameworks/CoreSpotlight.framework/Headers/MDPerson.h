// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDPERSON_H
#define MDPERSON_H

@class NSString;


#import "CSPerson.h"

@interface MDPerson : CSPerson

@property (readonly) NSString *handle;


+(BOOL)supportsSecureCoding;
-(id)initWithDisplayName:(id)arg0 handle:(id)arg1 handleIdentifier:(id)arg2 ;


@end


#endif