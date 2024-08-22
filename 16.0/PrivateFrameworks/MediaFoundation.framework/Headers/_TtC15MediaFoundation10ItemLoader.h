// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION10ITEMLOADER_H
#define _TTC15MEDIAFOUNDATION10ITEMLOADER_H

@class SwiftObject, NSDictionary;
@protocol MFStateDumpable;



@interface _TtC15MediaFoundation10ItemLoader : SwiftObject <MFStateDumpable>

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