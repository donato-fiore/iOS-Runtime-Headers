// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBAVASSETWRITERDELEGATE_H
#define WEBAVASSETWRITERDELEGATE_H

@class NSString;
@protocol AVAssetWriterDelegate;

#import <Foundation/Foundation.h>


@interface WebAVAssetWriterDelegate : NSObject <AVAssetWriterDelegate>

 {
    *void m_writer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWriter:(*void)arg0 ;
-(void)assetWriter:(id)arg0 didProduceFragmentedHeaderData:(id)arg1 ;
-(void)assetWriter:(id)arg0 didProduceFragmentedMediaData:(id)arg1 fragmentedMediaDataReport:(id)arg2 ;
-(void)close;


@end


#endif