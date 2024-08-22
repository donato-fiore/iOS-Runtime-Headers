// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUERRORMESSAGEFACTORY_H
#define NUERRORMESSAGEFACTORY_H

@class NSString, FCNetworkReachability;
@protocol NUErrorMessageFactory;

#import <Foundation/Foundation.h>


@interface NUErrorMessageFactory : NSObject <NUErrorMessageFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) FCNetworkReachability *networkReachability; // ivar: _networkReachability
@property (readonly) Class superclass;


-(id)errorMessageForArticleView;
-(id)errorMessageForArticleViewWithOfflineReason:(NSInteger)arg0 ;
-(id)errorMessageForTitle:(id)arg0 subtitle:(id)arg1 ;
-(id)initWithNetworkReachability:(id)arg0 ;


@end


#endif