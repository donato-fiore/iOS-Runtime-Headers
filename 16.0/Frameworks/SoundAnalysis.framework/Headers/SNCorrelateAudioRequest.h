// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNCORRELATEAUDIOREQUEST_H
#define SNCORRELATEAUDIOREQUEST_H

@class AVAudioFile, NSString;
@protocol SNAnalyzerCreating, SNRequest;

#import <Foundation/Foundation.h>


@interface SNCorrelateAudioRequest : NSObject <SNAnalyzerCreating, SNRequest>

 {
    AVAudioFile *_referenceAudioFile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property CGFloat overlapFactor; // ivar: _overlapFactor
@property (readonly) Class superclass;


-(id)createAnalyzerWithError:(*id)arg0 ;
-(id)initWithAudioFile:(id)arg0 ;


@end


#endif