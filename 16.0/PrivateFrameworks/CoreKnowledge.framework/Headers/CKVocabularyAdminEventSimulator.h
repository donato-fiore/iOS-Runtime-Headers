// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVOCABULARYADMINEVENTSIMULATOR_H
#define CKVOCABULARYADMINEVENTSIMULATOR_H

@protocol CKVAdminService;

#import <Foundation/Foundation.h>


@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    CGFloat _timeout;
    BOOL _simulationFinished;
}




-(NSInteger)finish;
-(id)initWithAdminService:(id)arg0 ;
-(id)initWithAdminService:(id)arg0 timeout:(CGFloat)arg1 ;
-(void)dealloc;
-(void)handleTask:(unsigned short)arg0 reason:(unsigned short)arg1 completion:(id)arg2 ;


@end


#endif