// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRICORECONNECTIONTYPE_H
#define SIRICORECONNECTIONTYPE_H


#import <Foundation/Foundation.h>


@interface SiriCoreConnectionType : NSObject {
    NSInteger _technology;
}




-(BOOL)canUseWiFiDirectly;
-(BOOL)isEdge;
-(BOOL)isWWAN;
-(NSInteger)diagnosticConnectionType;
-(NSInteger)technology;
-(NSUInteger)aggregatorConnectionType;
-(id)description;
-(id)initWithTechnology:(NSInteger)arg0 ;


@end


#endif