// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTUISTICKERPLACEHOLDERPROVIDERFACTORY_H
#define AVTUISTICKERPLACEHOLDERPROVIDERFACTORY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface AVTUIStickerPlaceholderProviderFactory : NSObject

@property (readonly, nonatomic) id *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) NSMutableArray *queuedHandlers; // ivar: _queuedHandlers


-(id)initWithImageProvider:(id)arg0 ;
-(id)placeholderProvider:(SEL)arg0 ;


@end


#endif