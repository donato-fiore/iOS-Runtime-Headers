// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIDEVICETODEVICEENCRYPTIONHOOK_H
#define AAUIDEVICETODEVICEENCRYPTIONHOOK_H

@class NSString, RUIObjectModel, RUIServerHookResponse;
@protocol RUIServerHook, RUIServerHookDelegate;

#import <Foundation/Foundation.h>


@interface AAUIDeviceToDeviceEncryptionHook : NSObject <RUIServerHook>



@property (retain, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RUIServerHookDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) RUIServerHookResponse *serverHookResponse;
@property (readonly) Class superclass;


-(BOOL)shouldMatchElement:(id)arg0 ;
-(BOOL)shouldMatchModel:(id)arg0 ;
-(id)initWithAltDSID:(id)arg0 upgradeContext:(id)arg1 ;
-(void)_performHSAUpgradeWithAttributes:(id)arg0 completion:(id)arg1 ;
-(void)processElement:(id)arg0 attributes:(id)arg1 objectModel:(id)arg2 completion:(id)arg3 ;
-(void)processObjectModel:(id)arg0 completion:(id)arg1 ;


@end


#endif