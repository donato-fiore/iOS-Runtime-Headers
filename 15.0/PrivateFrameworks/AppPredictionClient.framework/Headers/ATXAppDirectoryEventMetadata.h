// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXAPPDIRECTORYEVENTMETADATA_H
#define ATXAPPDIRECTORYEVENTMETADATA_H

@class NSNumber;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXAppDirectoryEventMetadata : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (retain, nonatomic) NSNumber *bundleIdInTopAppsVisible; // ivar: _bundleIdInTopAppsVisible
@property (retain, nonatomic) NSNumber *userLaunchedAppBeforeLeaving; // ivar: _userLaunchedAppBeforeLeaving


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXAppDirectoryEventMetadata:(id)arg0 ;
-(NSUInteger)hash;
-(id)encodeAsProto;
-(id)init;
-(id)initWithBundleIdInTopAppsVisible:(id)arg0 userLaunchedAppBeforeLeaving:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonDict;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif