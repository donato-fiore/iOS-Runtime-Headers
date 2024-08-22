// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKUSERPROTECTEDCONFIGURATION_H
#define BKUSERPROTECTEDCONFIGURATION_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface BKUserProtectedConfiguration : NSObject

@property (retain, nonatomic) NSNumber *applePayEnabled; // ivar: _applePayEnabled
@property (retain, nonatomic) NSNumber *attentionDetectionEnabled; // ivar: _attentionDetectionEnabled
@property (retain, nonatomic) NSNumber *identificationEnabled; // ivar: _identificationEnabled
@property (retain, nonatomic) NSNumber *loginEnabled; // ivar: _loginEnabled
@property (retain, nonatomic) NSNumber *periocularFaceIDMatchEnabled; // ivar: _periocularFaceIDMatchEnabled
@property (retain, nonatomic) NSNumber *unlockEnabled; // ivar: _unlockEnabled


-(id)description;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 effective:(BOOL)arg1 ;


@end


#endif