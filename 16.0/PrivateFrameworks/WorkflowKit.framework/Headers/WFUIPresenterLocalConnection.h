// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFUIPRESENTERLOCALCONNECTION_H
#define WFUIPRESENTERLOCALCONNECTION_H

@class NSString;
@protocol WFUIPresenterConnection, WFUIPresenterHostInterface, WFUIPresenterInterface;

#import <Foundation/Foundation.h>


@interface WFUIPresenterLocalConnection : NSObject <WFUIPresenterConnection>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<WFUIPresenterHostInterface> *host;
@property (readonly, nonatomic) NSObject<WFUIPresenterInterface> *presenter; // ivar: _presenter
@property (readonly) Class superclass;


-(id)initWithPresenter:(id)arg0 ;
-(id)presenterWithErrorHandler:(id)arg0 ;
-(id)synchronousPresenterWithErrorHandler:(id)arg0 ;


@end


#endif