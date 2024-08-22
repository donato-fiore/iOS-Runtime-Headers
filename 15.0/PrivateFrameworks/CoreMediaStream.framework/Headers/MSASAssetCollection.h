// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSASASSETCOLLECTION_H
#define MSASASSETCOLLECTION_H

@class NSString, NSArray, NSDictionary, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSASAssetCollection : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *GUID; // ivar: _GUID
@property (retain, nonatomic) NSString *albumGUID; // ivar: _albumGUID
@property (retain, nonatomic) NSArray *assets; // ivar: _assets
@property (retain, nonatomic) NSString *ctag; // ivar: _ctag
@property (retain, nonatomic) NSString *email; // ivar: _email
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (retain, nonatomic) NSString *firstName; // ivar: _firstName
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (nonatomic) BOOL hasComments; // ivar: _hasComments
@property (nonatomic) BOOL isDeletable; // ivar: _isDeletable
@property (nonatomic) BOOL isMine; // ivar: _isMine
@property (retain, nonatomic) NSString *lastName; // ivar: _lastName
@property (retain, nonatomic) NSDictionary *metadata; // ivar: _metadata
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) NSString *personID; // ivar: _personID
@property (nonatomic) NSInteger photoNumber; // ivar: _photoNumber
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (retain, nonatomic) id *userInfo; // ivar: _userInfo


+(BOOL)supportsSecureCoding;
+(id)MSASPAssetCollectionFromProtocolDictionary:(id)arg0 ;
+(id)assetCollectionWithAssetCollection:(id)arg0 ;
-(BOOL)hasVideoAsset;
-(BOOL)isAutoloopVideo;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPhotoIris;
-(BOOL)isVideo;
-(NSUInteger)hash;
-(id)MSASPProtocolDictionary;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 path:(id)arg1 ;
-(id)mediaAssetType;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif