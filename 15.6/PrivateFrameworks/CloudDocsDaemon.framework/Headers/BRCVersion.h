// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCVERSION_H
#define BRCVERSION_H

@class NSSet, NSData, NSNumber, NSString, BRCUserRowID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BRFieldCKInfo.h"

@interface BRCVersion : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) BRFieldCKInfo *ckInfo; // ivar: _ckInfo
@property (retain, nonatomic) NSSet *conflictLoserEtags; // ivar: _conflictLoserEtags
@property (retain, nonatomic) NSData *contentSignature; // ivar: _contentSignature
@property (retain, nonatomic) NSNumber *editedSinceShared; // ivar: _editedSinceShared
@property (readonly, nonatomic) BOOL hasThumbnail;
@property (readonly, nonatomic) BOOL isPackage;
@property (retain, nonatomic) NSString *lastEditorDeviceName; // ivar: _lastEditorDeviceName
@property (retain, nonatomic) NSNumber *lastEditorDeviceOrUserRowID; // ivar: _lastEditorDeviceOrUserRowID
@property (retain, nonatomic) NSNumber *lastEditorDeviceRowID;
@property (retain, nonatomic) BRCUserRowID *lastEditorRowID;
@property (retain, nonatomic) NSData *lazyXattr; // ivar: _lazyXattr
@property (nonatomic) NSInteger mtime; // ivar: _mtime
@property (retain, nonatomic) NSString *originalPOSIXName; // ivar: _originalPOSIXName
@property (retain, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (nonatomic) NSInteger size; // ivar: _size
@property (retain, nonatomic) NSData *thumbnailSignature; // ivar: _thumbnailSignature
@property (nonatomic) NSInteger thumbnailSize; // ivar: _thumbnailSize
@property (retain, nonatomic) NSData *xattrSignature; // ivar: _xattrSignature


+(BOOL)supportsSecureCoding;
-(BOOL)_hasLastEditorDeviceRowID;
-(BOOL)_hasLastEditorRowID;
-(BOOL)check:(id)arg0 logToFile:(struct __sFILE *)arg1 ;
-(BOOL)isEtagEqual:(id)arg0 ;
-(BOOL)isSmallAndMostRecentClientsGenerateThumbnails;
-(NSUInteger)diffAgainst:(id)arg0 ;
-(id)additionNameForItemID:(id)arg0 zoneID:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithContext:(id)arg0 ;
-(id)displayNameWithoutExtension:(BOOL)arg0 ;
-(id)initFromResultSet:(id)arg0 pos:(int)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVersion:(id)arg0 ;
-(id)lastEditorDeviceDisplayNameWithDB:(id)arg0 ;
-(id)lastEditorDisplayNameWithDB:(id)arg0 ;
-(id)lastEditorUserIdentityWithDB:(id)arg0 ;
-(id)uti;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif