// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLINTERSILOINTERFACESELECTORINFO_H
#define CLINTERSILOINTERFACESELECTORINFO_H

@class NSMethodSignature, NSString;

#import <Foundation/Foundation.h>


@interface CLIntersiloInterfaceSelectorInfo : NSObject

@property (readonly, nonatomic) int replyBlockIndex; // ivar: _replyBlockIndex
@property (readonly, nonatomic) int returnAddressIndex; // ivar: _returnAddressIndex
@property (readonly, nonatomic) SEL sel; // ivar: _sel
@property (readonly, retain, nonatomic) NSMethodSignature *sig; // ivar: _sig
@property (readonly, copy, nonatomic) NSString *typeStr;


-(id)description;
-(id)initWithSelector:(SEL)arg0 andMethodSignature:(id)arg1 ;


@end


#endif