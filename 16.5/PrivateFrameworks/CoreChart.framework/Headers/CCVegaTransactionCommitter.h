// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCVEGATRANSACTIONCOMMITTER_H
#define CCVEGATRANSACTIONCOMMITTER_H

@class NSHashTable, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CCVegaTransactionCommitter : NSObject {
    NSHashTable *_renderers;
    NSMutableArray *_mainThreadOperations;
    BOOL _needsCATransaction;
}




-(id)initWithRenderers:(id)arg0 ;
-(id)newMainThreadOperation;
-(void)commit;
-(void)setNeedsCATransaction;


@end


#endif