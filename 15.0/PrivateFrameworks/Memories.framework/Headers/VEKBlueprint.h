// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VEKBLUEPRINT_H
#define VEKBLUEPRINT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MiroBlueprint.h"
#import "VEKSong.h"

@interface VEKBlueprint : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) MiroBlueprint *data; // ivar: _data
@property (nonatomic) NSInteger editStyle; // ivar: _editStyle
@property (readonly, nonatomic) NSString *fontName;
@property (readonly, nonatomic) NSInteger mood; // ivar: _mood
@property (copy, nonatomic) VEKSong *song; // ivar: _song
@property (nonatomic) NSInteger titleStyle; // ivar: _titleStyle


+(BOOL)supportsSecureCoding;
+(id)moodIDForVEKMood:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)idealDurationForAsset:(id)arg0 ;
-(NSInteger)moodForMoodID:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithMood:(NSInteger)arg0 ;
-(id)moodIDForMood:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif