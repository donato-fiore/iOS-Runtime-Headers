// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKCLIENT_H
#define MKCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKClient : NSObject

@property (copy, nonatomic) NSString *brand; // ivar: _brand
@property (copy, nonatomic) NSString *hostname; // ivar: _hostname
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *os; // ivar: _os
@property (copy, nonatomic) NSString *version; // ivar: _version


-(id)initWithHostname:(id)arg0 brand:(id)arg1 model:(id)arg2 name:(id)arg3 os:(id)arg4 version:(id)arg5 locale:(id)arg6 ;


@end


#endif