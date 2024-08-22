// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOKERBEROSCREDENTIAL_H
#define SOKERBEROSCREDENTIAL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SOKerberosCredential : NSObject

@property unsigned int lifetime; // ivar: _lifetime
@property (retain) NSString *name; // ivar: _name
@property (retain) NSString *uuid; // ivar: _uuid


-(id)init;


@end


#endif