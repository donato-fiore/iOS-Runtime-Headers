// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKBASICLOGINSECONDFACTORACTIONS_H
#define AKBASICLOGINSECONDFACTORACTIONS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying>



@property (copy, nonatomic) id *ak_cancelAction; // ivar: _ak_cancelAction
@property (copy, nonatomic) id *codeEnteredAction; // ivar: _codeEnteredAction
@property (copy, nonatomic) id *regenerateCodeAction; // ivar: _regenerateCodeAction


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif