// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KNSOUNDTRACK_H
#define KNSOUNDTRACK_H

@class TSPObject, NSArray;
@protocol NSCopying;



@interface KNSoundtrack : TSPObject <NSCopying>

 {
    float _volume;
    NSInteger _mode;
    NSArray *_media;
}


@property (copy, nonatomic) NSArray *media;
@property (nonatomic) NSInteger mode;
@property (nonatomic) float volume;


+(BOOL)needsObjectUUID;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithSoundtrackMedia:(id)arg0 context:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif