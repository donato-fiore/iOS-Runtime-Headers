// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDWATCHAPPMETADATA_H
#define ASDWATCHAPPMETADATA_H

@class NSString, NSNumber;
@protocol ASDAppMetadata, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDWatchAppMetadata : NSObject <ASDAppMetadata, NSCopying, NSSecureCoding>



@property (copy) NSString *altDSID; // ivar: _altDSID
@property (copy) NSString *appleID; // ivar: _appleID
@property (copy) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSNumber *downloaderID; // ivar: _downloaderID
@property (copy) NSNumber *externalVersionID; // ivar: _externalVersionID
@property (readonly) NSUInteger hash;
@property (copy) NSNumber *itemID; // ivar: _itemID
@property (readonly) NSInteger metadataType;
@property (copy) NSNumber *previousExternalVersionID; // ivar: _previousExternalVersionID
@property (copy) NSString *previousVariantID; // ivar: _previousVariantID
@property (copy) NSNumber *purchaserID; // ivar: _purchaserID
@property (copy) NSString *redownloadParams; // ivar: _redownloadParams
@property BOOL skipIfInstalled; // ivar: _skipIfInstalled
@property (readonly) Class superclass;
@property (getter=isUserInitiated) BOOL userInitiated; // ivar: _userInitiated


+(BOOL)supportsSecureCoding;
+(id)metadataFromStoreMetadata:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemID:(id)arg0 ;
-(id)initWithItemID:(id)arg0 externalVersionID:(id)arg1 ;
-(id)initWithStoreMetadata:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif