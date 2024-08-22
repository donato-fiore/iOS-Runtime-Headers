// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDSOURCE_H
#define WDSOURCE_H

@class HKDevice, NSString, HKSourceDataModel;

#import <Foundation/Foundation.h>


@interface WDSource : NSObject

@property (readonly, nonatomic) HKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HKSourceDataModel *sourceModel; // ivar: _sourceModel


-(id)initWithSource:(id)arg0 device:(id)arg1 ;


@end


#endif