// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCLAZYPACKAGE_H
#define BRCLAZYPACKAGE_H

@class NSString, CKPackage;

#import <Foundation/Foundation.h>

#import "BRCStageRegistry.h"

@interface BRCLazyPackage : NSObject {
    BRCStageRegistry *_registry;
    NSString *_stageID;
    NSString *_name;
    CKPackage *_package;
}




-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)itemCount;
-(id)closeAndReturn;
-(id)initWithRegistry:(id)arg0 stageID:(id)arg1 name:(id)arg2 ;


@end


#endif