// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DSHADERRESOURCE_H
#define TSCH3DSHADERRESOURCE_H



#import "TSCH3DResource.h"
#import "TSCH3DShaderProgram.h"
#import "TSCH3DVersion.h"

@interface TSCH3DShaderResource : TSCH3DResource {
    TSCH3DShaderProgram *_program;
}


@property (readonly, nonatomic) TSCH3DShaderProgram *program;
@property (readonly, nonatomic) TSCH3DVersion *version;


+(struct pair<TSCH3D::IteratorRange<const char *>, TSCH3D::IteratorRange<const char *>> )stringsFromBuffer:(id)arg0 ;
-(id)get;
-(id)initWithCaching:(int)arg0 ;
-(id)initWithCaching:(int)arg0 version:(id)arg1 ;
-(struct IteratorRange<const char *> )resourceStringOfString:(id)arg0 ;
-(void)appendShaderResourceString:(struct IteratorRange<const char *> )arg0 toDataBuffer:(id)arg1 ;


@end


#endif