// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSRVOICEPROFILECOMPOSER_H
#define SSRVOICEPROFILECOMPOSER_H


#import <Foundation/Foundation.h>


@interface SSRVoiceProfileComposer : NSObject



+(id)sharedTrainer;
-(BOOL)addUtterance:(id)arg0 toProfile:(id)arg1 ;
-(BOOL)addUtterance:(id)arg0 toProfile:(id)arg1 withAsset:(id)arg2 ;


@end


#endif