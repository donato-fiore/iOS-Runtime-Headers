// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PECOPYACTIONEVENTBUILDER_H
#define PECOPYACTIONEVENTBUILDER_H

@class PICompositionController;
@protocol PEAsset;

#import <Foundation/Foundation.h>


@interface PECopyActionEventBuilder : NSObject

@property (retain, nonatomic) NSObject<PEAsset> *asset; // ivar: _asset
@property (copy, nonatomic) PICompositionController *copiedCompositionController; // ivar: _copiedCompositionController


-(id)buildEvent;


@end


#endif