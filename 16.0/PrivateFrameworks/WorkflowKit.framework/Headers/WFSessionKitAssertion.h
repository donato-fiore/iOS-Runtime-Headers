// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSESSIONKITASSERTION_H
#define WFSESSIONKITASSERTION_H


#import <Foundation/Foundation.h>


@interface WFSessionKitAssertion : NSObject {
    ? resultHandler;
    ? failureHandler;
    ? purpose;
    ? state;
    ? additionalResultHandlers;
    ? additionalFailureHandlers;
    ? cancellables;
}


@property (nonatomic, copy) id *failureHandler;
@property (nonatomic, copy) id *resultHandler;


-(BOOL)takeWithError:(*id)arg0 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif