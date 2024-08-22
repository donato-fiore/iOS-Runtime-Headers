// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKMESSAGEENTRYVIEWLAYOUTMETRICS_H
#define CKMESSAGEENTRYVIEWLAYOUTMETRICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CKMessageEntryViewLayoutMetrics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat defaultEntryContentViewHeight; // ivar: _defaultEntryContentViewHeight
@property (readonly, nonatomic) CGFloat defaultEntryViewHeight; // ivar: _defaultEntryViewHeight
@property (readonly, nonatomic) CGFloat defaultSubjectEntryContentViewHeight; // ivar: _defaultSubjectEntryContentViewHeight
@property (readonly, nonatomic) CGFloat defaultSubjectEntryViewHeight; // ivar: _defaultSubjectEntryViewHeight
@property (readonly, nonatomic) UIEdgeInsets entryViewContentInsets; // ivar: _entryViewContentInsets
@property (readonly, nonatomic) UIEdgeInsets entryViewTextAlignmentInsets; // ivar: _entryViewTextAlignmentInsets


+(BOOL)supportsSecureCoding;
+(id)cachedMetricsRecalculatingIfNecessary;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)calculateTextMetrics;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif