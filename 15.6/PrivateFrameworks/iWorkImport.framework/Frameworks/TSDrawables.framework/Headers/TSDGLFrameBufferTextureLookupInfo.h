// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGLFRAMEBUFFERTEXTURELOOKUPINFO_H
#define TSDGLFRAMEBUFFERTEXTURELOOKUPINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSDGLFrameBufferTextureLookupInfo : NSObject

@property (nonatomic) unsigned int attachment; // ivar: _attachment
@property (nonatomic) NSInteger indexOnAttachment; // ivar: _indexOnAttachment
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int target; // ivar: _target
@property (readonly, nonatomic) unsigned int textureName; // ivar: _textureName
@property (readonly, nonatomic) CGSize textureSize; // ivar: _textureSize
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(id)invalidTextureLookupInfo;
+(id)textureLookupInfoWithAttachment:(unsigned int)arg0 indexOnAttachment:(NSInteger)arg1 textureName:(unsigned int)arg2 textureSize:(struct CGSize )arg3 name:(id)arg4 target:(unsigned int)arg5 ;
-(id)description;
-(id)initWithAttachment:(unsigned int)arg0 indexOnAttachment:(NSInteger)arg1 textureName:(unsigned int)arg2 textureSize:(struct CGSize )arg3 name:(id)arg4 target:(unsigned int)arg5 valid:(BOOL)arg6 ;
-(void)dealloc;


@end


#endif