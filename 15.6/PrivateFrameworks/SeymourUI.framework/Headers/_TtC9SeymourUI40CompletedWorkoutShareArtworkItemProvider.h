// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI40COMPLETEDWORKOUTSHAREARTWORKITEMPROVIDER_H
#define _TTC9SEYMOURUI40COMPLETEDWORKOUTSHAREARTWORKITEMPROVIDER_H

@class NSItemProvider;



@interface _TtC9SeymourUI40CompletedWorkoutShareArtworkItemProvider : NSItemProvider {
    ? assetClient;
    ? artwork;
    ? renderer;
    ? size;
}




-(id)init;
-(id)initWithItem:(id)arg0 typeIdentifier:(id)arg1 ;
-(id)loadDataRepresentationForTypeIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif