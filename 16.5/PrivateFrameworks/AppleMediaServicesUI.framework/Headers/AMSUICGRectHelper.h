// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUICGRECTHELPER_H
#define AMSUICGRECTHELPER_H


#import <Foundation/Foundation.h>


@interface AMSUICGRectHelper : NSObject



+(struct CGRect )flattenRect:(struct CGRect )arg0 toParentFrame:(struct CGRect )arg1 ;
+(struct CGRect )rect:(struct CGRect )arg0 withFlippedOriginXRelativeTo:(struct CGRect )arg1 ;


@end


#endif