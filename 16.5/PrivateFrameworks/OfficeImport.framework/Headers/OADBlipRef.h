// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADBLIPREF_H
#define OADBLIPREF_H

@class NSString, NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "OADBlip.h"

@interface OADBlipRef : NSObject <NSCopying>

 {
    int mIndex;
    NSString *mName;
    NSMutableArray *mEffects;
    OADBlip *mBlip;
}




+(id)blipRefWithIndex:(int)arg0 name:(id)arg1 blip:(id)arg2 ;
+(id)blipRefWithIndex:(int)arg0 name:(id)arg1 blip:(id)arg2 effects:(id)arg3 ;
+(id)inflatedExtensionForGzippedExtension:(id)arg0 ;
+(int)blipTypeForContentType:(id)arg0 ;
+(int)blipTypeForExtension:(id)arg0 ;
+(int)blipTypeForImageData:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNull;
-(NSUInteger)effectCount;
-(NSUInteger)hash;
-(id)blip;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectAtIndex:(NSUInteger)arg0 ;
-(id)effects;
-(id)init;
-(id)initWithIndex:(int)arg0 name:(id)arg1 blip:(id)arg2 ;
-(id)initWithIndex:(int)arg0 name:(id)arg1 blip:(id)arg2 effects:(id)arg3 ;
-(id)name;
-(int)index;
-(void)addEffect:(id)arg0 ;
-(void)removeEffectAtIndex:(NSUInteger)arg0 ;
-(void)setBlip:(id)arg0 ;
-(void)setEffects:(id)arg0 ;
-(void)setIndex:(int)arg0 ;
-(void)setName:(id)arg0 ;


@end


#endif