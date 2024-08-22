// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRMANGLEDID_H
#define BRMANGLEDID_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BRMangledID : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *aliasTargetContainerString;
@property (readonly, nonatomic) NSString *appLibraryOrZoneName;
@property (readonly, nonatomic) BOOL isCloudDocsMangledID;
@property (readonly, nonatomic) BOOL isDesktopMangledID;
@property (readonly, nonatomic) BOOL isDocumentsMangledID;
@property (readonly, nonatomic) BOOL isPassbookMangledID;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) NSString *mangledIDString; // ivar: _mangledIDString
@property (readonly, nonatomic) NSString *ownerName;


+(BOOL)supportsSecureCoding;
+(BOOL)validateContainerID:(id)arg0 ;
+(BOOL)validateMangledIDString:(id)arg0 ;
+(BOOL)validateOwnerName:(id)arg0 ;
+(id)_containerIDFromSharedContainerID:(id)arg0 validate:(BOOL)arg1 ;
+(id)_containerIDFromSharedMangledIDString:(id)arg0 validate:(BOOL)arg1 ;
+(id)_mangledIDStringFromZoneName:(id)arg0 ownerName:(id)arg1 validate:(BOOL)arg2 ;
+(id)_ownerNameFromSharedMangledIDString:(id)arg0 validate:(BOOL)arg1 ;
+(id)_privateMangledContainerID:(id)arg0 validate:(BOOL)arg1 ;
+(id)_privateUnmangledContainerID:(id)arg0 validate:(BOOL)arg1 ;
+(id)_sharedMangledIDStringWithContainerID:(id)arg0 ownerName:(id)arg1 validate:(BOOL)arg2 ;
+(id)cloudDocsMangledID;
+(id)containerMetadataMangledID;
+(id)desktopMangledID;
+(id)documentsMangledID;
+(id)sharedDatabaseMangledID;
+(id)sideCarMangledID;
+(id)zoneHealthMangledID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMangledID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAliasTargetContainerString:(id)arg0 ;
-(id)initWithAppLibraryName:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMangledString:(id)arg0 ;
-(id)initWithRecordZoneID:(id)arg0 ;
-(id)initWithZoneName:(id)arg0 ownerName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif