// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCNOTIFICATIONDROPBOXDATA_H
#define FCNOTIFICATIONDROPBOXDATA_H

@class NSString, NSDictionary;
@protocol FCNotificationDropboxData;

#import <Foundation/Foundation.h>


@interface FCNotificationDropboxData : NSObject <FCNotificationDropboxData>



@property (readonly, copy, nonatomic) NSString *baseURLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int deviceDigestMode;
@property (readonly, copy, nonatomic) NSString *deviceToken;
@property (readonly, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *notificationUserID;
@property (readonly, copy, nonatomic) NSString *storefrontID;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif