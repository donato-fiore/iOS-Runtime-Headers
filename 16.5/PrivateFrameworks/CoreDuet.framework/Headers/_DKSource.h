// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DKSOURCE_H
#define _DKSOURCE_H

@class NSString, NSNumber;
@protocol _DKProtobufConverting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _DKSource : NSObject <_DKProtobufConverting, NSSecureCoding>



@property (readonly) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *deviceID; // ivar: _deviceID
@property (readonly) NSString *groupID; // ivar: _groupID
@property (readonly) NSUInteger hash;
@property (retain) NSString *intentID; // ivar: _intentID
@property (readonly) NSString *itemID; // ivar: _itemID
@property (readonly) NSString *sourceID; // ivar: _sourceID
@property (readonly) Class superclass;
@property (readonly) NSString *syncDeviceID;
@property (retain) NSNumber *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
+(id)defaultSourceID;
+(id)entityName;
+(id)fromPBCodable:(id)arg0 ;
+(id)intentsSourceID;
+(id)sourceForInteraction:(id)arg0 bundleID:(id)arg1 ;
+(id)sourceForSearchableItem:(id)arg0 bundleID:(id)arg1 ;
+(id)spotlightSourceID;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 itemIdentifier:(id)arg2 groupIdentifier:(id)arg3 deviceIdentifier:(id)arg4 userIdentifier:(id)arg5 ;
-(id)initWithIdentifier:(id)arg0 bundleIdentifier:(id)arg1 itemIdentifier:(id)arg2 groupIdentifier:(id)arg3 deviceIdentifier:(id)arg4 userIdentifier:(id)arg5 intentIdentifier:(id)arg6 ;
-(id)toPBCodable;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif