// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMOUTPUTACTION_H
#define AXMOUTPUTACTION_H


#import <Foundation/Foundation.h>

#import "AXMOutputActionHandle.h"

@interface AXMOutputAction : NSObject {
    AXMOutputActionHandle *_handle;
}


@property (readonly, nonatomic) AXMOutputActionHandle *handle;


-(id)_initWithHandle:(id)arg0 ;


@end


#endif