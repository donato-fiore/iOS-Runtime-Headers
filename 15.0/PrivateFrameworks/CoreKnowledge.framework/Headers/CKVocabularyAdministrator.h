// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVOCABULARYADMINISTRATOR_H
#define CKVOCABULARYADMINISTRATOR_H

@protocol CKVAdminService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKVocabularyAdministrator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    CGFloat _timeout;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)makeAdministrator;
+(void)initialize;
-(id)init;
-(id)initWithAdminService:(id)arg0 queue:(id)arg1 ;
-(id)initWithAdminService:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 ;
-(id)simulateEventHandling:(BOOL)arg0 ;
-(void)enumerateAllItemsWithBatchSize:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)triggerMigration:(id)arg0 ;


@end


#endif