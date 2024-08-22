// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYSTEMHEALTHCLIENT_H
#define SYSTEMHEALTHCLIENT_H


#import <Foundation/Foundation.h>


@interface SystemHealthClient : NSObject

@property (nonatomic) NSUInteger componentType; // ivar: componentType


-(NSUInteger)getComponentStatusWithError:(*id)arg0 ;
-(id)init;
-(id)initWithComponentType:(NSUInteger)arg0 ;


@end


#endif