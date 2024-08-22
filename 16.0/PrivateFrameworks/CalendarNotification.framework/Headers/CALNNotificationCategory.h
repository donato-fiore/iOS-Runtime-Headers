// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNNOTIFICATIONCATEGORY_H
#define CALNNOTIFICATIONCATEGORY_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CALNNotificationCategory : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, copy, nonatomic) NSString *categorySummaryFormat; // ivar: _categorySummaryFormat
@property (readonly, copy, nonatomic) NSString *hiddenPreviewsBodyPlaceholder; // ivar: _hiddenPreviewsBodyPlaceholder
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 hiddenPreviewsBodyPlaceholder:(id)arg2 options:(NSUInteger)arg3 ;
+(id)categoryWithIdentifier:(id)arg0 actions:(id)arg1 hiddenPreviewsBodyPlaceholder:(id)arg2 options:(NSUInteger)arg3 categorySummaryFormat:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCategory:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 actions:(id)arg1 hiddenPreviewsBodyPlaceholder:(id)arg2 options:(NSUInteger)arg3 categorySummaryFormat:(id)arg4 ;


@end


#endif