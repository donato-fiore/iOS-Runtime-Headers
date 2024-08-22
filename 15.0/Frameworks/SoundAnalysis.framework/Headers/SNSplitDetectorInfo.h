// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNSPLITDETECTORINFO_H
#define SNSPLITDETECTORINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SNSplitDetectorInfo : NSObject

@property (readonly, nonatomic) NSString *detectorHead; // ivar: _detectorHead
@property (readonly, nonatomic) NSString *featureExtractor; // ivar: _featureExtractor
@property (readonly, nonatomic) NSString *soundIdentifier; // ivar: _soundIdentifier


-(id)initWithDetectorHead:(id)arg0 featureExtractor:(id)arg1 soundIdentifier:(id)arg2 ;


@end


#endif