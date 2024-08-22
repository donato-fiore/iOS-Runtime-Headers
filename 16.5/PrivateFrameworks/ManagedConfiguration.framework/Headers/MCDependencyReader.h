// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCDEPENDENCYREADER_H
#define MCDEPENDENCYREADER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MCDependencyReader : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // ivar: _memberQueue
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict; // ivar: _memberQueueSystemDomainsDict
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict; // ivar: _memberQueueUserDomainsDict


+(id)sharedReader;
+(id)systemStoragePath;
+(id)userStoragePath;
+(void)setSystemStoragePath:(id)arg0 userStoragePath:(id)arg1 ;
-(id)_init;
-(id)dependentsOfParent:(id)arg0 inDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg0 inSystemDomain:(id)arg1 ;
-(id)dependentsOfParent:(id)arg0 inUserDomain:(id)arg1 ;
-(id)init;
-(id)memberQueueDependentsOfParent:(id)arg0 inDomain:(id)arg1 ;
-(id)memberQueueDependentsOfParent:(id)arg0 inSystemDomain:(id)arg1 ;
-(id)memberQueueDependentsOfParent:(id)arg0 inUserDomain:(id)arg1 ;
-(id)memberQueueParentsInDomain:(id)arg0 ;
-(id)memberQueueParentsInSystemDomain:(id)arg0 ;
-(id)memberQueueParentsInUserDomain:(id)arg0 ;
-(id)parentsInDomain:(id)arg0 ;
-(id)parentsInSystemDomain:(id)arg0 ;
-(id)parentsInUserDomain:(id)arg0 ;
-(id)systemDomainsDict;
-(id)userDomainsDict;
-(void)invalidateCache;


@end


#endif