// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSEXTENSIONCYCLERCOMMANDHANDLER_H
#define WBSEXTENSIONCYCLERCOMMANDHANDLER_H

@class NSString;
@protocol WBSCyclerTestTarget;

#import <Foundation/Foundation.h>


@interface WBSExtensionCyclerCommandHandler : NSObject <WBSCyclerTestTarget>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)clearBookmarksWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)createBookmarkListWithTitle:(id)arg0 inListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)createBookmarkWithTitle:(id)arg0 url:(id)arg1 inListWithIdentifier:(id)arg2 atIndex:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)deleteBookmarkWithIdentifier:(id)arg0 reply:(id)arg1 ;
-(void)fetchTopLevelBookmarkList:(id)arg0 ;
-(void)moveBookmarkWithIdentifier:(id)arg0 intoListWithIdentifier:(id)arg1 atIndex:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)setTitle:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)setURL:(id)arg0 forBookmarkWithIdentifier:(id)arg1 reply:(id)arg2 ;
-(void)syncBookmarksWithCompletionHandler:(id)arg0 ;


@end


#endif