// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXLTTESTTRANSCRIBER_H
#define AXLTTESTTRANSCRIBER_H

@class NSString;
@protocol AXLTTranscriberProtocol, AXLTTranscriberDelegateProtocol, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AXLTTestTranscriber : NSObject <AXLTTranscriberProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXLTTranscriberDelegateProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *dispatchSource; // ivar: _dispatchSource
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTranscribing; // ivar: _isTranscribing
@property (readonly) Class superclass;


-(BOOL)startTranscription:(*id)arg0 ;
-(BOOL)stopTranscription:(*id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)resetTranscription;


@end


#endif