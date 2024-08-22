// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RLMARRAYHOLDER_H
#define RLMARRAYHOLDER_H


#import <Foundation/Foundation.h>


@interface RLMArrayHolder : NSObject {
    unique_ptr<id [], std::default_delete<id []>> items;
}






@end


#endif