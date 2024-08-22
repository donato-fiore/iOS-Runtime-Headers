// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETLOSSCONFIG_H
#define ETLOSSCONFIG_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface ETLossConfig : NSObject

@property (retain) NSString *custom_network_path; // ivar: _custom_network_path
@property (retain) NSString *label_name; // ivar: _label_name
@property (retain) NSArray *label_shape; // ivar: _label_shape
@property (retain) NSString *loss_name; // ivar: _loss_name
@property NSUInteger mode; // ivar: _mode
@property (retain) NSString *output_name; // ivar: _output_name


+(id)L2Loss;
+(id)softmaxCrossEntropyLoss;


@end


#endif