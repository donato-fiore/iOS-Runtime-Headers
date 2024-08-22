// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOANALYZERMUTABLEREPORTSESSION_H
#define HMIVIDEOANALYZERMUTABLEREPORTSESSION_H

@class HMFObject, NSMutableArray, NSString;
@protocol NSSecureCoding;



@interface HMIVideoAnalyzerMutableReportSession : HMFObject <NSSecureCoding>



@property (readonly) NSMutableArray *fragments; // ivar: _fragments
@property (copy) NSString *source; // ivar: _source


+(BOOL)supportsSecureCoding;
-(id)attributeDescriptions;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSource:(id)arg0 ;
-(void)appendFragmentResult:(id)arg0 redactFrames:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif