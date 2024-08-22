// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMULTILABELESPRESSOCLASSIFIERCACHED_H
#define SGMULTILABELESPRESSOCLASSIFIERCACHED_H

@class NSString;
@protocol PMLMultiLabelClassifierProtocol;

#import <Foundation/Foundation.h>


@interface SGMultiLabelEspressoClassifierCached : NSObject <PMLMultiLabelClassifierProtocol>

 {
    NSString *_espressoModelFile;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)classifierWithEspressoModelFile:(id)arg0 ;
-(NSUInteger)outputDimension;
-(id)initWithEspressoModelFile:(id)arg0 ;
-(id)predict:(id)arg0 ;


@end


#endif