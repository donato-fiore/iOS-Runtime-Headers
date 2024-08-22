// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REDIRECTHANDLER_H
#define REDIRECTHANDLER_H

@class NSString, NSMutableDictionary, NSDate;
@protocol ConfigurableObjectProtocol, SymptomAdditionalProtocol, AdditionalInfoProtocol;

#import <Foundation/Foundation.h>


@interface RedirectHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol, AdditionalInfoProtocol>

 {
    NSString *_originalURLKey;
    NSString *_redirectURLKey;
    unsigned int _ignoreFor;
    unsigned int _maxCount;
    CGFloat _maxAge;
    NSMutableDictionary *_ignoredDestinations;
    unsigned int _numIgnored;
    CGFloat _numIgnoredScaleFactor;
    NSString *_currentRedirectURL;
    NSMutableDictionary *_redirectedOrigins;
    NSMutableDictionary *_requestingPids;
    NSDate *_pruningTime;
    unsigned int _numNegatives;
    id *_resetObserver;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)noteSymptom:(id)arg0 ;
+(id)_sharedInstance;
+(id)configureClass:(id)arg0 ;
+(id)evaluate:(id)arg0 forThreshold:(NSInteger)arg1 ;
+(id)generateAdditionalInfo:(id)arg0 ;
-(BOOL)noteSymptom:(id)arg0 ;
-(id)evaluate:(id)arg0 forThreshold:(NSInteger)arg1 ;
-(id)generateAdditionalInfo:(id)arg0 ;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)_addRedirectFrom:(id)arg0 To:(id)arg1 by:(NSUInteger)arg2 atTime:(unsigned int)arg3 ;
-(void)_prune;
-(void)_pruneDir:(id)arg0 ;
-(void)_reset:(id)arg0 ;
-(void)performNegativeFeedback:(id)arg0 ;


@end


#endif