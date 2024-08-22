// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKASYNCTRANSACTIONGROUP_H
#define CKASYNCTRANSACTIONGROUP_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface CKAsyncTransactionGroup : NSObject {
    NSHashTable *_containerLayers;
}




+(id)mainTransactionGroup;
+(void)registerTransactionGroupAsMainRunloopObserver:(id)arg0 ;
-(id)init;
-(void)addTransactionContainer:(id)arg0 ;
-(void)commit;


@end


#endif