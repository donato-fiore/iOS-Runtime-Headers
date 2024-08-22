// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JFXMEDIADATAREADERFACTORY_H
#define JFXMEDIADATAREADERFACTORY_H


#import <Foundation/Foundation.h>


@interface JFXMediaDataReaderFactory : NSObject



+(id)sharedInstance;
-(id)createARMetadataReaderWithCreationAttributesProvider:(id)arg0 name:(id)arg1 ;
-(id)createDepthDataReaderWithCreationAttributesProvider:(id)arg0 name:(id)arg1 ;


@end


#endif