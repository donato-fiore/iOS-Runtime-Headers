// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDTABCLOSEREQUEST_H
#define WBSCLOUDTABCLOSEREQUEST_H

@class NSUUID, NSDictionary, NSDate, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSCloudTabCloseRequest : NSObject <NSCopying>

 {
    NSUUID *_sourceDeviceUUID;
}


@property (readonly, nonatomic) NSUUID *destinationDeviceUUID; // ivar: _destinationDeviceUUID
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (readonly, nonatomic) NSUUID *requestUUID; // ivar: _requestUUID
@property (readonly, nonatomic) NSUUID *tabUUID; // ivar: _tabUUID
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)isCloudTabCloseRequestDictionary:(id)arg0 ;
+(id)_dictionaryWithURL:(id)arg0 tabUUID:(id)arg1 lastModified:(id)arg2 sourceDeviceUUID:(id)arg3 destinationDeviceUUID:(id)arg4 ;
+(id)destinationDeviceUUIDInDictionary:(id)arg0 ;
-(BOOL)matchesCloudTab:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 requestUUID:(id)arg1 ;
-(id)initWithURL:(id)arg0 tabUUID:(id)arg1 lastModified:(id)arg2 sourceDeviceUUID:(id)arg3 destinationDeviceUUID:(id)arg4 requestUUID:(id)arg5 ;


@end


#endif