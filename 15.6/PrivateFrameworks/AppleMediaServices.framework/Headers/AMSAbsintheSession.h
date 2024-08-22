// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSABSINTHESESSION_H
#define AMSABSINTHESESSION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSAbsintheSession : NSObject

@property (retain, nonatomic) NSString *servKey; // ivar: _servKey
@property (nonatomic) *PSCSessionInternal_ sessionRef; // ivar: _sessionRef


+(id)defaultSession;
-(BOOL)_prepareContextWithBag:(id)arg0 error:(*id)arg1 ;
-(BOOL)clearSession;
-(BOOL)verifyData:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)signData:(id)arg0 bag:(id)arg1 error:(*id)arg2 ;


@end


#endif