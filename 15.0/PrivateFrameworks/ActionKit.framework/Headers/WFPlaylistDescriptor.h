// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPLAYLISTDESCRIPTOR_H
#define WFPLAYLISTDESCRIPTOR_H

@class NSNumber, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFPlaylistDescriptor : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) BOOL entireMusicLibrary; // ivar: _entireMusicLibrary
@property (readonly, nonatomic) NSNumber *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, copy, nonatomic) NSString *playlistName; // ivar: _playlistName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntireMusicLibrary;
-(id)initWithPlaylistName:(id)arg0 persistentIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif