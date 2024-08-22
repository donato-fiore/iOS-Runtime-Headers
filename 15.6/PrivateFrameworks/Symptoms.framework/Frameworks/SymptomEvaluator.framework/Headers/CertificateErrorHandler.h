// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CERTIFICATEERRORHANDLER_H
#define CERTIFICATEERRORHANDLER_H

@class NSMutableDictionary, NSString;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol;

#import <Foundation/Foundation.h>


@interface CertificateErrorHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol>

 {
    NSMutableDictionary *_banned;
    NSMutableDictionary *_stores;
    int _numCerts;
    int _numNonBannedCerts;
    int _numCertOrigins;
    BOOL _captivityReportingDisabled;
    id *_resetObserver;
    unsigned int _threshold;
    unsigned int _outrankCertThreshold;
    unsigned int _outrankOriginThreshold;
    CGFloat _dampeningCurrentInterval;
    CGFloat _dampeningInitialInterval;
    CGFloat _dampeningIncrement;
    CGFloat _dampeningMaxInterval;
    CGFloat _lastCaptivityReportTime;
    CGFloat _lastOutrankReportTime;
    CGFloat _outrankEventGraceTime;
    CGFloat _outrankEventMaxTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int maxAge; // ivar: _maxAge
@property (nonatomic) unsigned int maxCount; // ivar: _maxCount
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)allowNotifyingCaptivityAt:(CGFloat)arg0 ;
-(BOOL)allowNotifyingOutrankAt:(CGFloat)arg0 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)evaluate:(id)arg0 forThreshold:(NSInteger)arg1 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_reset:(id)arg0 ;
-(void)restoreDefaults;
-(void)setConfiguration:(id)arg0 ;
-(void)storeMaintenance;


@end


#endif