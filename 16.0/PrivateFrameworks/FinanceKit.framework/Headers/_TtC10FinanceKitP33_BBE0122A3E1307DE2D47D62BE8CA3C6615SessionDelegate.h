// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FINANCEKITP33_BBE0122A3E1307DE2D47D62BE8CA3C6615SESSIONDELEGATE_H
#define _TTC10FINANCEKITP33_BBE0122A3E1307DE2D47D62BE8CA3C6615SESSIONDELEGATE_H

@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface _TtC10FinanceKitP33_BBE0122A3E1307DE2D47D62BE8CA3C6615SessionDelegate : NSObject <NSURLSessionDelegate>

 {
    ? sessionDidBecomeInvalid;
    ? sessionDidBecomeInvalidHandler;
}




-(id)init;
-(void)URLSession:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;


@end


#endif