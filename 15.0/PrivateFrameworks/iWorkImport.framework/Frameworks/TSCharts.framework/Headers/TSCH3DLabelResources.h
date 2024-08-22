// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DLABELRESOURCES_H
#define TSCH3DLABELRESOURCES_H

@class NSMutableDictionary;
@protocol TSWPStyleProviding;


#import "TSCH3DStringIndexedResources.h"
#import "TSCH3DTextureAtlas.h"

@interface TSCH3DLabelResources : TSCH3DStringIndexedResources {
    NSMutableDictionary *_cache;
}


@property (readonly, nonatomic) TSCH3DTextureAtlas *atlas; // ivar: _atlas
@property (weak, nonatomic) NSObject<TSWPStyleProviding> *styleProvidingSource; // ivar: _styleProvidingSource


-(id)initWithSize:(*void)arg0 ;
-(id)paragraphStyleForKey:(NSUInteger)arg0 defaultStyle:(id)arg1 ;
-(id)prepareTextureAtlasWithSamples:(float)arg0 ;
-(id)resourceAtIndex:(*void)arg0 string:(id)arg1 bitmapContextInfo:(id)arg2 labelWidth:(CGFloat)arg3 ;
-(void)setParagraphStyle:(id)arg0 atIndex:(*void)arg1 ;
-(void)setParagraphStyle:(id)arg0 forKey:(NSUInteger)arg1 atIndex:(*void)arg2 ;


@end


#endif