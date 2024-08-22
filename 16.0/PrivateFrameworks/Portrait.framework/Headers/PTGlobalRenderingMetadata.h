// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTGLOBALRENDERINGMETADATA_H
#define PTGLOBALRENDERINGMETADATA_H

@class NSString;
@protocol PTSerializable;

#import <Foundation/Foundation.h>


@interface PTGlobalRenderingMetadata : NSObject <PTSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned int majorVersion; // ivar: _majorVersion
@property (readonly, nonatomic) unsigned int minorVersion; // ivar: _minorVersion
@property (nonatomic) unsigned int renderingVersion; // ivar: _renderingVersion
@property (readonly) Class superclass;


+(id)objectFromData:(id)arg0 ;
-(BOOL)applyToRenderState:(id)arg0 error:(*id)arg1 ;
-(BOOL)matchesRenderState:(id)arg0 ;
-(BOOL)writeToData:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithMajorVersion:(unsigned int)arg0 minorVersion:(unsigned int)arg1 ;
-(unsigned int)sizeOfSerializedObjectWithOptions:(id)arg0 ;
-(void)applyToRenderRequest:(id)arg0 ;
-(void)applyToRenderState:(id)arg0 ;


@end


#endif