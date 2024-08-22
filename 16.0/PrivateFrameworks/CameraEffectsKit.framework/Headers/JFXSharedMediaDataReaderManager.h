// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXSHAREDMEDIADATAREADERMANAGER_H
#define JFXSHAREDMEDIADATAREADERMANAGER_H

@protocol JFXPlayableElement;

#import <Foundation/Foundation.h>

#import "JFXARMetadataMediaReader.h"
#import "JFXDepthDataMediaReader.h"

@interface JFXSharedMediaDataReaderManager : NSObject

@property (retain, nonatomic) NSObject<JFXPlayableElement> *playableElement; // ivar: _playableElement
@property (readonly, nonatomic) JFXARMetadataMediaReader *sharedARMetadataReader;
@property (readonly, nonatomic) JFXDepthDataMediaReader *sharedDepthDataReader;
@property (weak, nonatomic) JFXARMetadataMediaReader *weakSharedARMetadataReader; // ivar: _weakSharedARMetadataReader
@property (weak, nonatomic) JFXDepthDataMediaReader *weakSharedDepthDataReader; // ivar: _weakSharedDepthDataReader


-(id)initWithPlayableElement:(id)arg0 ;


@end


#endif