// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXACTIONVIEWMANAGER_H
#define SXACTIONVIEWMANAGER_H

@class NSString;
@protocol SXActionViewManager, SXViewControllerPresenting;

#import <Foundation/Foundation.h>


@interface SXActionViewManager : NSObject <SXActionViewManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<SXViewControllerPresenting> *viewControllerPresenter; // ivar: _viewControllerPresenter


-(id)initWithViewControllerPresenting:(id)arg0 ;
-(void)presentActivityGroup:(id)arg0 action:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect )arg3 completion:(id)arg4 ;


@end


#endif