// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUSERACTIVITYDATA_H
#define SFUSERACTIVITYDATA_H

@class NSString, NSDictionary, NSData, NSArray;
@protocol SFUserActivityData, NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SFUserActivityData : NSObject <SFUserActivityData, NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif