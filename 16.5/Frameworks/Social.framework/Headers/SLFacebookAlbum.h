// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLFACEBOOKALBUM_H
#define SLFACEBOOKALBUM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SLFacebookAlbum : NSObject <NSSecureCoding>



@property BOOL canUpload; // ivar: _canUpload
@property NSInteger count; // ivar: _count
@property (retain) NSString *coverPhotoIdentifier; // ivar: _coverPhotoIdentifier
@property (retain) NSString *identifier; // ivar: _identifier
@property BOOL isDefaultAlbum; // ivar: _isDefaultAlbum
@property (retain) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)albumWithDataDictionary:(id)arg0 ;
+(id)albumsWithAlbumDataDictionaries:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif