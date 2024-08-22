// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDPINHERITANCETRUSTCONTROLLER_H
#define CDPINHERITANCETRUSTCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CDPInheritanceTrustController : NSObject



-(BOOL)isInheritanceAccessKeyValid:(id)arg0 ;
-(id)_inheritanceAccessCodeFromKey:(id)arg0 ;
-(id)_inheritanceKeyFromAccessKey:(id)arg0 keyError:(*id)arg1 ;
-(void)createInheritanceKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)deleteInheritanceAccessKeyWithContext:(id)arg0 completion:(id)arg1 ;
-(void)recoverOctagonWithContext:(id)arg0 inheritanceKey:(id)arg1 completion:(id)arg2 ;


@end


#endif