// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDOPERATIONINFODELEGATEWRAPPER_H
#define CKDOPERATIONINFODELEGATEWRAPPER_H

@class NSString;
@protocol CKDOperationInfoDelegate;

#import <Foundation/Foundation.h>


@interface CKDOperationInfoDelegateWrapper : NSObject

@property (weak, nonatomic) NSObject<CKDOperationInfoDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID


-(id)initWithDelegate:(id)arg0 ;
-(void)performWithDelegate:(id)arg0 ;


@end


#endif