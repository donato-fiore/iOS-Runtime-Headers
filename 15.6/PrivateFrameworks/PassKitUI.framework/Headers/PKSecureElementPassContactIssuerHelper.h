// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSECUREELEMENTPASSCONTACTISSUERHELPER_H
#define PKSECUREELEMENTPASSCONTACTISSUERHELPER_H

@class NSString, PKSecureElementPass;
@protocol MFMailComposeViewControllerDelegate, PKSecureElementPassContactIssuerHelperDelegate;

#import <Foundation/Foundation.h>


@interface PKSecureElementPassContactIssuerHelper : NSObject <MFMailComposeViewControllerDelegate>

 {
    BOOL _isAppleAccess;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKSecureElementPassContactIssuerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *openBusinessChatHandler; // ivar: _openBusinessChatHandler
@property (copy, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (readonly) Class superclass;


-(void)callIssuer;
-(void)emailIssuer;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)openIssuerWebsite;
-(void)presentContactViewController:(NSUInteger)arg0 ;


@end


#endif