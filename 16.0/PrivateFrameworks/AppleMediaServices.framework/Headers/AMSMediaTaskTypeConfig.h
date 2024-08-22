// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSMEDIATASKTYPECONFIG_H
#define AMSMEDIATASKTYPECONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSMediaTaskTypeConfig : NSObject

@property (readonly, nonatomic) NSString *hostBagKey; // ivar: _hostBagKey
@property (readonly, nonatomic) BOOL includePlatform; // ivar: _includePlatform
@property (readonly, nonatomic) NSString *realm; // ivar: _realm
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *typeString; // ivar: _typeString


+(id)configForType:(NSInteger)arg0 ;
-(id)initWithType:(NSInteger)arg0 typeString:(id)arg1 hostBagKey:(id)arg2 realm:(id)arg3 includePlatform:(BOOL)arg4 ;


@end


#endif