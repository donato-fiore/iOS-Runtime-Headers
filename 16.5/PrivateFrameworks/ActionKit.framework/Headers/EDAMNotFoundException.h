// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDAMNOTFOUNDEXCEPTION_H
#define EDAMNOTFOUNDEXCEPTION_H

@class NSString;


#import "FATException.h"

@interface EDAMNotFoundException : FATException

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *key; // ivar: _key


+(id)structFields;
+(id)structName;


@end


#endif