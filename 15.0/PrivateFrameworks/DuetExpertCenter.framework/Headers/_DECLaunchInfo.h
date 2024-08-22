// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECLAUNCHINFO_H
#define _DECLAUNCHINFO_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DECLaunchInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) unsigned char consumerSubtype; // ivar: _consumerSubtype
@property (readonly, nonatomic) NSDictionary *itemsShownCounts; // ivar: _itemsShownCounts
@property (readonly, nonatomic) NSInteger launchSource; // ivar: _launchSource
@property (readonly, nonatomic) NSString *query; // ivar: _query


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLaunchSource:(NSInteger)arg0 query:(id)arg1 itemsShownCounts:(id)arg2 consumerSubtype:(unsigned char)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif