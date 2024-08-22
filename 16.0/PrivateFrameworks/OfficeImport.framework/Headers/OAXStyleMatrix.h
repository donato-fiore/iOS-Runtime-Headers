// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAXSTYLEMATRIX_H
#define OAXSTYLEMATRIX_H


#import <Foundation/Foundation.h>


@interface OAXStyleMatrix : NSObject



+(?)readFromNode:(?)arg0 toStyleMatrix:(?)arg1 packagePartdrawingState;
+(?)readReferenceFromParentNode:(?)arg0 name:(?)arg1 inNamespace:(?)arg2 colorindex;
+(id)readReferenceFromNode:(struct _xmlNode *)arg0 ;


@end


#endif