// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXINSTALLEDSUGGESTEDPAGE_H
#define ATXINSTALLEDSUGGESTEDPAGE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXInstalledSuggestedPage : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *modeUUID; // ivar: _modeUUID
@property (nonatomic) NSInteger pageType; // ivar: _pageType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXInstalledSuggestedPage:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif