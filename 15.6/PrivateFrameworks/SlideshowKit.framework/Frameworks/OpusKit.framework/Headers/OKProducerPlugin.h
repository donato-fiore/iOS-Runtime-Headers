// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRODUCERPLUGIN_H
#define OKPRODUCERPLUGIN_H

@class NSArray;


#import "OKProducerBundle.h"
#import "OKProducerContent.h"

@interface OKProducerPlugin : OKProducerBundle {
    Class _producerClass;
    NSInteger _loadCounter;
    NSArray *_loadedClasses;
}


@property (retain, nonatomic) OKProducerContent *content; // ivar: _content


-(BOOL)_load;
-(BOOL)hasExportedClass:(Class)arg0 ;
-(BOOL)hasLoadedClass:(Class)arg0 ;
-(BOOL)isLoaded;
-(BOOL)loadRetain;
-(CGFloat)minimumContentVersion;
-(NSUInteger)family;
-(id)URLForResource:(id)arg0 withExtension:(id)arg1 ;
-(id)audioURLs;
-(id)backgroundColor;
-(id)exportedClassNames;
-(id)init;
-(id)initWithURL:(id)arg0 ;
-(id)localizedName;
-(id)localizedStringForKey:(id)arg0 value:(id)arg1 table:(id)arg2 ;
-(id)producerWithPresentation:(id)arg0 ;
-(id)supportedResolutions;
-(void)_bundleDidLoad:(id)arg0 ;
-(void)_unload;
-(void)dealloc;
-(void)setupJavascriptContext:(id)arg0 ;
-(void)unloadRelease;


@end


#endif