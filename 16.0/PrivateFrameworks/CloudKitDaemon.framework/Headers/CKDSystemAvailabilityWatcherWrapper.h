// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDSYSTEMAVAILABILITYWATCHERWRAPPER_H
#define CKDSYSTEMAVAILABILITYWATCHERWRAPPER_H

@class NSString;
@protocol CKDSystemAvailabilityWatcher;

#import <Foundation/Foundation.h>


@interface CKDSystemAvailabilityWatcherWrapper : NSObject

@property (weak, nonatomic) NSObject<CKDSystemAvailabilityWatcher> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *personaID; // ivar: _personaID
@property (nonatomic) NSUInteger savedDelegateHash; // ivar: _savedDelegateHash


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithDelegate:(id)arg0 ;
-(void)postSystemAvailabilityChanged:(NSUInteger)arg0 ;


@end


#endif