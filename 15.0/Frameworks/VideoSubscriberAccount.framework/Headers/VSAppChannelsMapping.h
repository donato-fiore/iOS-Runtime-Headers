// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSAPPCHANNELSMAPPING_H
#define VSAPPCHANNELSMAPPING_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface VSAppChannelsMapping : NSObject

@property (copy, nonatomic) NSString *appAdamID; // ivar: _appAdamID
@property (copy, nonatomic) NSArray *channelIDs; // ivar: _channelIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif