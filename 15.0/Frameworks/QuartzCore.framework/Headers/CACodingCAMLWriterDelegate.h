// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CACODINGCAMLWRITERDELEGATE_H
#define CACODINGCAMLWRITERDELEGATE_H

@class NSString, NSDictionary;
@protocol CAMLWriterDelegate;

#import <Foundation/Foundation.h>


@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate>

 {
    NSString *_resourceDir;
    int _serial;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSDictionary *imageEncodeOptions; // ivar: _imageEncodeOptions
@property (copy) NSString *imageFormat; // ivar: _imageFormat
@property BOOL skipHiddenLayers; // ivar: _skipHiddenLayers
@property (readonly) Class superclass;


-(BOOL)CAMLWriter:(id)arg0 shouldEncodeObject:(id)arg1 ;
-(id)CAMLWriter:(id)arg0 URLForResource:(id)arg1 ;
-(id)CAMLWriter:(id)arg0 typeForObject:(id)arg1 ;
-(id)initWithResourceDir:(id)arg0 ;
-(void)dealloc;


@end


#endif