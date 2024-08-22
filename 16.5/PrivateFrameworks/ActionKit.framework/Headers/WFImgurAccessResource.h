// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFIMGURACCESSRESOURCE_H
#define WFIMGURACCESSRESOURCE_H

@class NSArray, NSString;
@protocol WFActionEventObserver;


#import "WFAccountAccessResource.h"
#import "WFImgurUploadAction.h"

@interface WFImgurAccessResource : WFAccountAccessResource <WFActionEventObserver>



@property (readonly, copy, nonatomic) NSArray *accounts;
@property (weak, nonatomic) WFImgurUploadAction *action; // ivar: _action
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesAccount; // ivar: _usesAccount


-(Class)accountClass;
-(NSUInteger)status;
-(void)action:(id)arg0 parameterStateDidChangeForKey:(id)arg1 ;


@end


#endif