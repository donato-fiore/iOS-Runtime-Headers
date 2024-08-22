// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVFRAGMENTEDMEDIADATAREPORT_H
#define AVFRAGMENTEDMEDIADATAREPORT_H


#import <Foundation/Foundation.h>

#import "AVFragmentedMediaDataReportInternal.h"

@interface AVFragmentedMediaDataReport : NSObject {
    AVFragmentedMediaDataReportInternal *_internal;
}


@property (readonly, nonatomic) NSInteger numberOfBytesToEndOfFirstVideoFrame;


-(id)init;
-(id)initWithFigFragmentedMediaDataReportDictionary:(id)arg0 ;
-(void)dealloc;


@end


#endif