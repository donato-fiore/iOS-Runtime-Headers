// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCFUPDATESCRIPTS_H
#define STCFUPDATESCRIPTS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface STCFUpdateScripts : NSObject {
    NSDictionary *_updatedScripts;
}




-(id)init;
-(void)_getUpdatedScripts;
-(void)_writeUpdatedReplayFileAt:(id)arg0 withObjects:(id)arg1 error:(*id)arg2 ;
-(void)updateCFScriptsForReplayFile:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif