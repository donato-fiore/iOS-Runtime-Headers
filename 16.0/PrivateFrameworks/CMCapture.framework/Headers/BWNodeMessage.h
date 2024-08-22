// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEMESSAGE_H
#define BWNODEMESSAGE_H


#import <Foundation/Foundation.h>


@interface BWNodeMessage : NSObject {
    int _category;
    int _type;
}


@property (readonly) int category;
@property (readonly) int type;




@end


#endif