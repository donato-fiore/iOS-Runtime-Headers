// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE10ITEMLOADER_H
#define _TTC17MEDIAPLAYBACKCORE10ITEMLOADER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable;



@interface _TtC17MediaPlaybackCore10ItemLoader : SwiftObject <MFStateDumpable>

 {
    ? loadingItem;
    ? loadingEnabled;
    ? token;
    ? assetLoader;
    ? reporter;
    ? queue;
    ? producer;
    ? delegate;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;




@end


#endif