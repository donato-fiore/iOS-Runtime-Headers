// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMOVIEFINGERPRINT_H
#define TSDMOVIEFINGERPRINT_H

@class TSKSosBase, NSArray;
@protocol NSCopying;



@interface TSDMovieFingerprint : TSKSosBase <NSCopying>

 {
    int _versionMajor;
    int _versionMinor;
    int _versionPatch;
}


@property (readonly, nonatomic) NSArray *tracks; // ivar: _tracks
@property (readonly, nonatomic) NSUInteger version;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithTracks:(id)arg0 ;
-(id)initWithTracks:(id)arg0 version:(NSUInteger)arg1 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif