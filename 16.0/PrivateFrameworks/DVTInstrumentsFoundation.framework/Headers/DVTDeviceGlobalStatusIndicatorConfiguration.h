// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DVTDEVICEGLOBALSTATUSINDICATORCONFIGURATION_H
#define DVTDEVICEGLOBALSTATUSINDICATORCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DVTDeviceGlobalStatusIndicatorConfiguration : NSObject

@property (readonly, nonatomic) NSString *informationText; // ivar: _informationText
@property (readonly, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 informationText:(id)arg1 ;


@end


#endif