// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUIUSERACTIONWORKSPACEURLOPENER_H
#define CNUIUSERACTIONWORKSPACEURLOPENER_H

@class NSString, LSApplicationWorkspace;
@protocol CNUIUserActionURLOpener;

#import <Foundation/Foundation.h>


@interface CNUIUserActionWorkspaceURLOpener : NSObject <CNUIUserActionURLOpener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) LSApplicationWorkspace *workspace; // ivar: _workspace


+(id)openConfigurationWithEndpoint:(id)arg0 isSensitive:(BOOL)arg1 ;
+(id)urlCouldNotBeOpenedErrorWithURL:(id)arg0 ;
-(id)init;
-(id)initWithWorkspace:(id)arg0 ;
-(id)openURL:(id)arg0 isSensitive:(BOOL)arg1 connectionEndpoint:(id)arg2 withScheduler:(id)arg3 ;
-(id)openURL:(id)arg0 isSensitive:(BOOL)arg1 withScheduler:(id)arg2 ;
-(id)openURL:(id)arg0 withScheduler:(id)arg1 ;


@end


#endif