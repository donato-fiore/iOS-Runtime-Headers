// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EXTENSIONITEM_H
#define EXTENSIONITEM_H

@class _EXExtensionIdentity, PRSceneViewController, PRSPosterPath<BSInvalidatable>;

#import <Foundation/Foundation.h>


@interface ExtensionItem : NSObject {
    _EXExtensionIdentity *_extension;
    PRSceneViewController *_viewController;
    PRSPosterPath<BSInvalidatable> *_tmpPoster;
    NSInteger _activationStyle;
}




+(id)itemWithExtension:(id)arg0 activationStyle:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)wasEverActivated;
-(NSUInteger)hash;
-(id)activate;
-(id)name;
-(void)deactivate;
-(void)dealloc;
-(void)invalidate;


@end


#endif