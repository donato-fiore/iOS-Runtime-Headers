// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSVIEWMODEL_H
#define VSVIEWMODEL_H

@class NSError, VSIdentityProvider, NSString;

#import <Foundation/Foundation.h>


@interface VSViewModel : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VSIdentityProvider *identityProvider; // ivar: _identityProvider
@property (nonatomic, getter=shouldPreValidate) BOOL preValidate; // ivar: _preValidate
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (nonatomic) NSUInteger validationState; // ivar: _validationState
@property (nonatomic) NSUInteger viewState; // ivar: _viewState


-(id)init;
-(void)configureWithRequest:(id)arg0 ;


@end


#endif