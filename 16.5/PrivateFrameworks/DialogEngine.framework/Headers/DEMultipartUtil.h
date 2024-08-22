// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEMULTIPARTUTIL_H
#define DEMULTIPARTUTIL_H


#import <Foundation/Foundation.h>


@interface DEMultipartUtil : NSObject



+(id)getBoundary;
+(id)getBoundaryData;
+(id)getMessageEnd;
+(id)getMessageEndData;
+(id)getPartEndData;


@end


#endif