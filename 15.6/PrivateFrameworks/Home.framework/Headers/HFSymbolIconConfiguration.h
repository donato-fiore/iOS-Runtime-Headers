// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSYMBOLICONCONFIGURATION_H
#define HFSYMBOLICONCONFIGURATION_H

@class UIImageSymbolConfiguration, NSString;

#import <Foundation/Foundation.h>


@interface HFSymbolIconConfiguration : NSObject

@property (readonly, nonatomic) UIImageSymbolConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) NSString *systemImageName; // ivar: _systemImageName


-(id)initWithSystemImageName:(id)arg0 ;
-(id)initWithSystemImageName:(id)arg0 configuration:(id)arg1 ;


@end


#endif