// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9SEYMOURUI29SHARESHEETARTWORKITEMPROVIDER_H
#define _TTC9SEYMOURUI29SHARESHEETARTWORKITEMPROVIDER_H

@class NSItemProvider;



@interface _TtC9SeymourUI29ShareSheetArtworkItemProvider : NSItemProvider {
    ? assetClient;
    ? artwork;
    ? size;
}




-(id)init;
-(id)initWithItem:(id)arg0 typeIdentifier:(id)arg1 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif