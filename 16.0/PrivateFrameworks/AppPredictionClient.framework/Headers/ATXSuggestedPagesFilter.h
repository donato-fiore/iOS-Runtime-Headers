// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESFILTER_H
#define ATXSUGGESTEDPAGESFILTER_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesFilter : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (nonatomic) NSInteger pageType; // ivar: _pageType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif