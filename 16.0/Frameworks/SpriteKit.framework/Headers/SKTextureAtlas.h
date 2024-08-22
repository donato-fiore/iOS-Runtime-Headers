// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKTEXTUREATLAS_H
#define SKTEXTUREATLAS_H

@class NSDictionary, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKTextureAtlas : NSObject <NSSecureCoding>

 {
    NSDictionary *_textureDict;
    NSString *_atlasName;
    BOOL _isCUIImageAtlas;
    unordered_map<std::string, SKTexture *, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, SKTexture *>>> _textureMap;
}


@property (readonly, nonatomic) NSArray *textureNames;


+(BOOL)canUseObjectForAtlas:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)atlasFromCUIImageAtlas:(id)arg0 withName:(id)arg1 ;
+(id)atlasNamed:(id)arg0 ;
+(id)atlasWithDictionary:(id)arg0 ;
+(id)findTextureNamed:(id)arg0 ;
+(id)getSupportedPostfixes;
+(id)lookupCachedTextureNamed:(id)arg0 ;
+(struct CGImage *)createCGImageFromCUINamedImage:(struct CGImage *)arg0 withSize:(struct CGSize )arg1 atRect:(struct CGRect )arg2 ;
+(void)_exportAtlasWithDictionary:(id)arg0 toFile:(id)arg1 ;
+(void)_exportAtlasWithDictionary:(id)arg0 toFile:(id)arg1 forcePOT:(BOOL)arg2 ;
+(void)preloadTextureAtlases:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)preloadTextureAtlasesNamed:(id)arg0 withCompletionHandler:(id)arg1 ;
-(BOOL)isEqualToTextureAtlas:(id)arg0 ;
-(id)_copyImageData;
-(id)createSubTextureFromTexture:(id)arg0 andCUINamedImage:(id)arg1 andOrigin:(struct CGPoint )arg2 ;
-(id)createTextureFromProvider:(struct CGImageProvider *)arg0 andSource:(struct CGImage *)arg1 ;
-(id)description;
-(id)findTextureNamedFromAtlas:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)textureNamed:(id)arg0 ;
-(void)_prePopulateCache;
-(void)commonInit;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadTextures;
-(void)loadTexturesFromCUIImageAtlas:(id)arg0 ;
-(void)parseAtlasPropertyList:(id)arg0 withPath:(id)arg1 ;
-(void)preloadWithCompletionHandler:(id)arg0 ;
-(void)unload;


@end


#endif