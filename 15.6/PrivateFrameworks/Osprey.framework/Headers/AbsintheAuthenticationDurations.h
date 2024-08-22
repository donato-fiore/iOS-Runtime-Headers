// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ABSINTHEAUTHENTICATIONDURATIONS_H
#define ABSINTHEAUTHENTICATIONDURATIONS_H

@class NSNumber, NSMutableDictionary, NSMutableString;

#import <Foundation/Foundation.h>


@interface AbsintheAuthenticationDurations : NSObject

@property (retain, nonatomic) NSNumber *absintheElapsed; // ivar: _absintheElapsed
@property (retain, nonatomic) NSMutableDictionary *absintheTimestamps; // ivar: _absintheTimestamps
@property (retain, nonatomic) NSMutableString *connectionMethod; // ivar: _connectionMethod
@property (retain, nonatomic) NSNumber *createSessionElapsed; // ivar: _createSessionElapsed
@property (retain, nonatomic) NSNumber *getCertificateElapsed; // ivar: _getCertificateElapsed
@property (retain, nonatomic) NSNumber *sessionEstablishedElapsed; // ivar: _sessionEstablishedElapsed


-(id)calculateDuration:(id)arg0 and:(id)arg1 ;
-(id)init;
-(void)reportAbsintheAuthenticationDurations;
-(void)setAbsintheAuthenticationTimestampForKey:(id)arg0 ;
-(void)setAbsintheConnectionMethodWith:(id)arg0 ;


@end


#endif