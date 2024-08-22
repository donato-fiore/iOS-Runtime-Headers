// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDBACKSTORE_H
#define PXFEEDBACKSTORE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PXFeedbackStore : NSObject

@property (readonly, nonatomic) NSDictionary *store; // ivar: _store


-(BOOL)_loadStore;
-(BOOL)_saveStore;
-(NSUInteger)sentFeedbackCount;
-(NSUInteger)unsentFeedbackCount;
-(id)init;
-(id)longDescription;
-(void)_cleanupStore;
-(void)addFeedbackEntry:(id)arg0 ;
-(void)removeFeedbackEntry:(id)arg0 ;


@end


#endif