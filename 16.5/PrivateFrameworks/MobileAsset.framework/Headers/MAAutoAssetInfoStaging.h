// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETINFOSTAGING_H
#define MAAUTOASSETINFOSTAGING_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetInfoStaging : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *allAvailableForStagingAttributes; // ivar: _allAvailableForStagingAttributes
@property (readonly, nonatomic) NSUInteger totalExpectedBytes; // ivar: _totalExpectedBytes


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAvailableForStaging:(id)arg0 withTotalExpectedBytes:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif