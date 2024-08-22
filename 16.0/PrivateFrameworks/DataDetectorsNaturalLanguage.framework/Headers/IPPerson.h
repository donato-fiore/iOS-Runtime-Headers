// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPPERSON_H
#define IPPERSON_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IPPerson : NSObject

@property (retain) NSString *ABUUID; // ivar: _ABUUID
@property (readonly, copy) NSString *displayableName;
@property (readonly) NSString *email;
@property (readonly) NSString *fullName; // ivar: _fullName
@property (readonly) NSString *handle; // ivar: _handle
@property (readonly) NSString *handleType; // ivar: _handleType


-(id)init;
-(id)initWithEmail:(id)arg0 fullName:(id)arg1 ;
-(id)initWithHandle:(id)arg0 handleType:(id)arg1 fullName:(id)arg2 ;
-(id)initWithSGIPPerson:(id)arg0 ;
-(id)initWithString:(id)arg0 ;


@end


#endif