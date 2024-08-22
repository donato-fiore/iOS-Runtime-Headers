// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSLEEPDAYSUMMARYCACHESETTINGS_H
#define HKSLEEPDAYSUMMARYCACHESETTINGS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKSleepDaySummaryCacheSettings : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 mode:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif