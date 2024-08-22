// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSTREAMDATASTOREPRUNER_H
#define BMSTREAMDATASTOREPRUNER_H


#import <Foundation/Foundation.h>

#import "BMStreamDatastore.h"

@interface BMStreamDatastorePruner : NSObject {
    BMStreamDatastore *_inner;
}


@property (readonly, nonatomic) BOOL canReadOrPruneData;


-(BOOL)deleteEventAtBookmark:(id)arg0 outTombstoneBookmark:(*id)arg1 ;
-(Class)eventBodyClass;
-(id)fetchEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
-(id)initWithStream:(id)arg0 config:(id)arg1 ;
-(id)newEnumeratorFromBookmark:(id)arg0 ;
-(id)newEnumeratorFromStartTime:(CGFloat)arg0 ;
-(id)streamIdentifier;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 shouldDeleteUsingBlock:(id)arg3 ;
-(void)eventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 shouldDeleteUsingBlock:(id)arg2 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 callback:(id)arg2 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 reason:(NSUInteger)arg2 usingBlock:(id)arg3 ;
-(void)removeEventsFrom:(CGFloat)arg0 to:(CGFloat)arg1 usingBlock:(id)arg2 ;
-(void)syncMappedFiles;


@end


#endif