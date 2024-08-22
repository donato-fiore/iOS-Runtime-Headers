// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDTABDEVICE_H
#define WBSCLOUDTABDEVICE_H

@class NSDictionary, NSString, NSDate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface WBSCloudTabDevice : NSObject <NSCopying>



@property (readonly, nonatomic, getter=isCloseRequestSupported) BOOL closeRequestSupported; // ivar: _closeRequestSupported
@property (readonly, nonatomic, getter=isCloudKitBookmarkSyncingSupported) BOOL cloudKitBookmarkSyncingSupported; // ivar: _cloudKitBookmarkSyncingSupported
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, copy, nonatomic) NSString *disambiguatedName; // ivar: _disambiguatedName
@property (readonly, nonatomic, getter=isEphemeralDevice) BOOL ephemeralDevice; // ivar: _ephemeralDevice
@property (readonly, nonatomic) BOOL hasDuplicateName; // ivar: _hasDuplicateName
@property (readonly, nonatomic) NSDate *lastModified; // ivar: _lastModified
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSArray *tabs; // ivar: _tabs
@property (readonly, copy, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)hasDuplicateDeviceNameInDictionary:(id)arg0 ;
+(BOOL)isCloudTabDeviceDictionary:(id)arg0 ;
+(BOOL)isEphemeralDeviceInDictionary:(id)arg0 ;
+(NSUInteger)tabCountInDictionary:(id)arg0 ;
+(id)_dictionaryWithDeviceName:(id)arg0 lastModified:(id)arg1 hasDuplicateName:(BOOL)arg2 tabs:(id)arg3 isEphemeralDevice:(BOOL)arg4 ;
+(id)deviceNameInDictionary:(id)arg0 ;
+(id)lastModifiedDateInDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceByRemovingTab:(id)arg0 ;
-(id)deviceByRemovingTabs:(id)arg0 ;
-(id)deviceBySettingDisambiguatedName:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 lastModified:(id)arg1 hasDuplicateName:(BOOL)arg2 tabs:(id)arg3 uuid:(id)arg4 ;
-(id)initWithDeviceName:(id)arg0 lastModified:(id)arg1 hasDuplicateName:(BOOL)arg2 tabs:(id)arg3 uuid:(id)arg4 isEphemeralDevice:(BOOL)arg5 ;
-(id)initWithDictionary:(id)arg0 uuid:(id)arg1 ;


@end


#endif