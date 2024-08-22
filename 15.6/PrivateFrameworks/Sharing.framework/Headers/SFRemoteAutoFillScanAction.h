// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFREMOTEAUTOFILLSCANACTION_H
#define SFREMOTEAUTOFILLSCANACTION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface SFRemoteAutoFillScanAction : NSObject

@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(void)actionForURL:(id)arg0 completion:(id)arg1 ;
-(void)performWithCompletion:(id)arg0 ;


@end


#endif