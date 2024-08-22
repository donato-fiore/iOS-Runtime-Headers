// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RTTTRANSCRIPTIONCONTROLLER_H
#define RTTTRANSCRIPTIONCONTROLLER_H

@class NSString, AXLTLiveTranscription;
@protocol RTTTranscriptionControllerDelegate;

#import <Foundation/Foundation.h>


@interface RTTTranscriptionController : NSObject

@property (retain, nonatomic) NSString *currentCallUUID; // ivar: _currentCallUUID
@property (retain, nonatomic) NSString *currentTranscription; // ivar: _currentTranscription
@property (weak, nonatomic) NSObject<RTTTranscriptionControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) AXLTLiveTranscription *transcriber; // ivar: _transcriber


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)startTranscribingForCallUUID:(id)arg0 ;
-(void)stopTranscribingForCallUUID:(id)arg0 ;


@end


#endif