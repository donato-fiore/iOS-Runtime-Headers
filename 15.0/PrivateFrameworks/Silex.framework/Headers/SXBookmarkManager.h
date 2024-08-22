// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXBOOKMARKMANAGER_H
#define SXBOOKMARKMANAGER_H

@class NSMutableDictionary, NSString;
@protocol SXBookmarkManager, SXBookmarkApplicatorManager;

#import <Foundation/Foundation.h>


@interface SXBookmarkManager : NSObject <SXBookmarkManager, SXBookmarkApplicatorManager>



@property (readonly, nonatomic) NSMutableDictionary *applicators; // ivar: _applicators
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)applyBookmark:(id)arg0 ;
-(void)registerApplicator:(id)arg0 bookmarkType:(Class)arg1 ;


@end


#endif