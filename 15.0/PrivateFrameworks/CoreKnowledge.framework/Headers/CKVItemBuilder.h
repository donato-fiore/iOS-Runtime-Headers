// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVITEMBUILDER_H
#define CKVITEMBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "CKVMutableItem.h"

@interface CKVItemBuilder : NSObject {
    NSMutableArray *_fields;
    CKVMutableItem *_mutableItem;
}




-(id)addFieldWithType:(NSInteger)arg0 label:(id)arg1 value:(id)arg2 error:(*id)arg3 ;
-(id)addFieldWithType:(NSInteger)arg0 value:(id)arg1 error:(*id)arg2 ;
-(id)buildBufferWithError:(*id)arg0 ;
-(id)init;
-(id)initWithItemType:(NSInteger)arg0 itemId:(id)arg1 error:(*id)arg2 ;


@end


#endif