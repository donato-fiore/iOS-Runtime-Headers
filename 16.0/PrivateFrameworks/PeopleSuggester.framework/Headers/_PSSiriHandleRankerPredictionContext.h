// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PSSIRIHANDLERANKERPREDICTIONCONTEXT_H
#define _PSSIRIHANDLERANKERPREDICTIONCONTEXT_H

@class NSArray, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _PSSiriHandleRankerPredictionContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *bundleIds; // ivar: _bundleIds
@property NSInteger domain; // ivar: _domain
@property (copy, nonatomic) NSDate *suggestionDate; // ivar: _suggestionDate


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif