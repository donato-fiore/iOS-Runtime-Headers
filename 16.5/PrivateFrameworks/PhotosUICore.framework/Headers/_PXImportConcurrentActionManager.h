// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXIMPORTCONCURRENTACTIONMANAGER_H
#define _PXIMPORTCONCURRENTACTIONMANAGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface _PXImportConcurrentActionManager : NSObject {
    NSMutableArray *_operations;
}




+(id)sharedInstance;
-(id)init;
-(void)addOperation:(id)arg0 ;
-(void)removeOperation:(id)arg0 ;


@end


#endif