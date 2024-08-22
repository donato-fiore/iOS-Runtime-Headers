// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOANALYZERMUTABLEREPORTSESSION_H
#define HMIVIDEOANALYZERMUTABLEREPORTSESSION_H

@class HMFObject, NSMutableArray, NSString;
@protocol NSSecureCoding;


#import "HMIVideoAnalyzerEventTracker.h"

@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>



@property (readonly) NSMutableArray *fragments; // ivar: _fragments
@property (copy) NSString *source; // ivar: _source
@property (readonly) HMIVideoAnalyzerEventTracker *tracker; // ivar: _tracker


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(id)tracks;
-(id)tracksForEventClass:(Class)arg0 confidenceLevel:(NSInteger)arg1 ;
-(id)tracksForEventClass:(Class)arg0 confidenceThreshold:(float)arg1 ;
-(void)appendFragmentResult:(id)arg0 redactFrames:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif