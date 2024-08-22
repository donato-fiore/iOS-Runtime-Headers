// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIUSERACTIONEXTENSIONURLOPENER_H
#define CNUIUSERACTIONEXTENSIONURLOPENER_H

@class NSString, NSExtensionContext;
@protocol CNUIUserActionURLOpener;

#import <Foundation/Foundation.h>


@interface CNUIUserActionExtensionURLOpener : NSObject <CNUIUserActionURLOpener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSExtensionContext *extensionContext; // ivar: _extensionContext
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExtensionContext:(id)arg0 ;
-(id)openURL:(id)arg0 isSensitive:(BOOL)arg1 connectionEndpoint:(id)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg0 isSensitive:(BOOL)arg1 withScheduler:(id)arg2 ;
-(id)openURL:(id)arg0 withScheduler:(id)arg1 ;


@end


#endif