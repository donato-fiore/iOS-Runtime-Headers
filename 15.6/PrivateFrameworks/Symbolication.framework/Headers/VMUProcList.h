// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VMUPROCLIST_H
#define VMUPROCLIST_H

@class NSLock, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VMUProcList : NSObject {
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
}




-(BOOL)update;
-(BOOL)updateFromSystem;
-(NSUInteger)count;
-(id)allNames;
-(id)allPIDs;
-(id)allPathNames;
-(id)allProcInfos;
-(id)init;
-(id)newestProcInfo;
-(id)newestProcInfoWithName:(id)arg0 ;
-(id)procInfoWithPID:(int)arg0 ;
-(void)_populateFromSystem;
-(void)addProcInfo:(id)arg0 ;
-(void)removeProcInfo:(id)arg0 ;
-(void)setProcInfos:(id)arg0 ;


@end


#endif