// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKDEVICE_H
#define SKDEVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKDevice : NSObject

@property (nonatomic) unsigned short blePSM; // ivar: _blePSM
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(id)description;


@end


#endif