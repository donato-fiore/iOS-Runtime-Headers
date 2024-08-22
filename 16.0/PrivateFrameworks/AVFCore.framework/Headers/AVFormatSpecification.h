// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVFORMATSPECIFICATION_H
#define AVFORMATSPECIFICATION_H


#import <Foundation/Foundation.h>

#import "AVOutputSettings.h"

@interface AVFormatSpecification : NSObject {
    AVOutputSettings *_outputSettings;
    *opaqueCMFormatDescription _sourceFormatDescription;
}




+(id)formatSpecificationWithOutputSettings:(id)arg0 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(id)initWithOutputSettings:(id)arg0 sourceFormatDescription:(struct opaqueCMFormatDescription *)arg1 ;
-(id)outputSettings;
-(struct opaqueCMFormatDescription *)sourceFormatDescription;
-(void)dealloc;


@end


#endif