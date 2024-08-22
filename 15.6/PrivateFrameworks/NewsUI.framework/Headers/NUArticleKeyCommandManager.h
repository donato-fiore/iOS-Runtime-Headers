// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUARTICLEKEYCOMMANDMANAGER_H
#define NUARTICLEKEYCOMMANDMANAGER_H

@class NSString, UIScrollView;
@protocol NUArticleKeyCommandManager;

#import <Foundation/Foundation.h>


@interface NUArticleKeyCommandManager : NSObject <NUArticleKeyCommandManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBeenTraversed; // ivar: _hasBeenTraversed
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(id)keyCommandsWithSelector:(SEL)arg0 ;
-(void)handleKey:(id)arg0 flags:(NSInteger)arg1 ;
-(void)handleKeyCommand:(id)arg0 ;
-(void)registerScrollView:(id)arg0 ;


@end


#endif