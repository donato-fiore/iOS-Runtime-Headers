// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSLINKCHECKINGRESULT_H
#define NSLINKCHECKINGRESULT_H

@class NSURL;


#import "NSTextCheckingResult.h"

@interface NSLinkCheckingResult : NSTextCheckingResult {
    _NSRange _range;
    NSURL *_url;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_adjustRangesWithOffset:(NSInteger)arg0 ;
-(NSUInteger)resultType;
-(id)URL;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRange:(struct _NSRange )arg0 URL:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(NSInteger)arg0 ;
-(struct _NSRange )range;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif