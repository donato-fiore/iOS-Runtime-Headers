// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SRUIFCARDLOADER_H
#define SRUIFCARDLOADER_H

@class NSString;
@protocol SFResourceLoader, SRUIFCardLoaderDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFCardLoader : NSObject <SFResourceLoader>



@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SRUIFCardLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadCard:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundation;


@end


#endif