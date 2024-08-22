// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIDEVICETODEVICEENCRYPTIONHOOK_H
#define AAUIDEVICETODEVICEENCRYPTIONHOOK_H

@class NSString, RUIObjectModel;
@protocol AAUIServerHook, AAUIServerHookDelegate;

#import <Foundation/Foundation.h>

#import "AAUIServerHookResponse.h"

@interface AAUIDeviceToDeviceEncryptionHook : NSObject <AAUIServerHook>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUIServerHookDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) AAUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 upgradeContext:(id)arg1 ;
-(void)_performHSAUpgradeWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif