// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKBASICLOGINACTIONS_H
#define AKBASICLOGINACTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AKBasicLoginActions : NSObject <NSCopying>



@property (copy, nonatomic) id *ak_cancelAction; // ivar: _ak_cancelAction
@property (copy, nonatomic) id *authenticateAction; // ivar: _authenticateAction
@property (copy, nonatomic) id *createIDAction; // ivar: _createIDAction
@property (copy, nonatomic) id *forgotIDAction; // ivar: _forgotIDAction
@property (copy, nonatomic) id *forgotPasswordAction; // ivar: _forgotPasswordAction
@property (copy, nonatomic) id *useIDAction; // ivar: _useIDAction


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif