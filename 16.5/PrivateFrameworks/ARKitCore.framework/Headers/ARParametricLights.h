// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARPARAMETRICLIGHTS_H
#define ARPARAMETRICLIGHTS_H

@class NSArray;
@protocol ARDaemonSecureCoding;

#import <Foundation/Foundation.h>


@interface ARParametricLights : NSObject <ARDaemonSecureCoding>

 {
    ? _ambientColor;
}


@property ? ambientColor;
@property (readonly, nonatomic) NSArray *areaLights; // ivar: _areaLights


-(id)initWithAmbientColor:(id)arg0 areaLights;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif