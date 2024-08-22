// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMINVALIDCONTACTSEXCEPTION_H
#define EDAMINVALIDCONTACTSEXCEPTION_H

@class NSArray, NSString;


#import "FATException.h"

@interface EDAMInvalidContactsException : FATException

@property (retain, nonatomic) NSArray *contacts; // ivar: _contacts
@property (retain, nonatomic) NSString *parameter; // ivar: _parameter
@property (retain, nonatomic) NSArray *reasons; // ivar: _reasons


+(id)structFields;
+(id)structName;


@end


#endif