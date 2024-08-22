// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCEVALUECONTAINER_H
#define TSCEVALUECONTAINER_H


#import <Foundation/Foundation.h>


@interface TSCEValueContainer : NSObject {
    TSCEValue mValue;
}




-(id)initWithValue:(struct TSCEValue )arg0 ;
-(struct TSCEValue )value;


@end


#endif