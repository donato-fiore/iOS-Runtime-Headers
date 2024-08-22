// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFWEATHEREVENTCONFIG_H
#define WFWEATHEREVENTCONFIG_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WFWeatherEventConfig : NSObject <NSCopying>



@property (nonatomic) BOOL enabled; // ivar: _enabled


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDictionary:(id)arg0 defaulEnabled:(BOOL)arg1 ;


@end


#endif