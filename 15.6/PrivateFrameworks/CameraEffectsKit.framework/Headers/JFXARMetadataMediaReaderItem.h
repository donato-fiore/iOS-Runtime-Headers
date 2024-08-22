// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXARMETADATAMEDIAREADERITEM_H
#define JFXARMETADATAMEDIAREADERITEM_H


#import <Foundation/Foundation.h>

#import "JFXARMetadata.h"

@interface JFXARMetadataMediaReaderItem : NSObject

@property (readonly, nonatomic) JFXARMetadata *arMetadata; // ivar: _arMetadata
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(id)initWithARMetadata:(id)arg0 timeRange:(struct ? )arg1 ;


@end


#endif