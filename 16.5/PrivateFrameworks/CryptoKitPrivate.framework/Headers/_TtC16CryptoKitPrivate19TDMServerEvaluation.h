// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC16CRYPTOKITPRIVATE19TDMSERVEREVALUATION_H
#define _TTC16CRYPTOKITPRIVATE19TDMSERVEREVALUATION_H

@class NSData;

#import <Foundation/Foundation.h>


@interface _TtC16CryptoKitPrivate19TDMServerEvaluation : NSObject {
    ? proof;
    ? evaluatedElement;
}


@property (nonatomic, readonly) NSData *evaluatedElement;
@property (nonatomic, readonly) NSData *proof;


-(id)init;


@end


#endif