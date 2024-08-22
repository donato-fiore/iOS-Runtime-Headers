// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXTRIALASSETS_H
#define ATXTRIALASSETS_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}




-(BOOL)_cleanModelDirectory;
-(BOOL)clearStaleUnarchivedLevels;
-(id)_treatmentId;
-(id)_unarchiveResource:(id)arg0 ;
-(id)_unarchivedResourcePath;
-(id)client;
-(id)dictionaryForClass:(Class)arg0 ;
-(id)dictionaryForClassName:(id)arg0 ;
-(id)dictionaryForResource:(id)arg0 ;
-(id)filePathForClass:(Class)arg0 ;
-(id)filePathForClassName:(id)arg0 ;
-(id)filePathForResource:(id)arg0 ;
-(id)init;
-(id)pathForLegacyResourcePath:(id)arg0 ;
-(void)addUpdateHandlerWithBlock:(id)arg0 ;


@end


#endif