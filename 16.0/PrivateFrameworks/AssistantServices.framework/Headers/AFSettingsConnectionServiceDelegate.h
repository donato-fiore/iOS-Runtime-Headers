// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFSETTINGSCONNECTIONSERVICEDELEGATE_H
#define AFSETTINGSCONNECTIONSERVICEDELEGATE_H

@class NSString;
@protocol AFSettingsServiceDelegate;

#import <Foundation/Foundation.h>

#import "AFSettingsConnection.h"

@interface AFSettingsConnectionServiceDelegate : NSObject <AFSettingsServiceDelegate>

 {
    AFSettingsConnection *_connection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithSettingsConnection:(id)arg0 ;
-(void)syncVerificationPartialResult:(id)arg0 ;
-(void)syncVerificationServerReport:(id)arg0 ;


@end


#endif