// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDHEALTHSERVICEWRITEOPERATION_H
#define _HDHEALTHSERVICEWRITEOPERATION_H


#import <Foundation/Foundation.h>

#import "HDHealthServiceCharacteristic.h"

@interface _HDHealthServiceWriteOperation : NSObject {
    BOOL _expectResponse;
    HDHealthServiceCharacteristic *_characteristic;
    id *_completion;
}






@end


#endif