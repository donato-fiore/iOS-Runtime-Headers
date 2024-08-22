// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBSYSTEMHEALTHBLUETOOTH_H
#define CBSYSTEMHEALTHBLUETOOTH_H


#import <Foundation/Foundation.h>


@interface CBSystemHealthBluetooth : NSObject

@property (nonatomic) NSUInteger componentType; // ivar: componentType


-(NSUInteger)getComponentStatusWithError:(*id)arg0 ;
-(id)init;
-(id)initWithComponentType:(NSUInteger)arg0 ;


@end


#endif