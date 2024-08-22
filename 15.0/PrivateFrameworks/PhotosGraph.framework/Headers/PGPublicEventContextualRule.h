// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPUBLICEVENTCONTEXTUALRULE_H
#define PGPUBLICEVENTCONTEXTUALRULE_H

@class PHPhotoLibrary, NSString;
@protocol PGContextualRule, OS_os_log;

#import <Foundation/Foundation.h>

#import "PGGraph.h"
#import "PGGraphPublicEventNodeCollection.h"
#import "PGGraphMomentNodeCollection.h"

@interface PGPublicEventContextualRule : NSObject <PGContextualRule>

 {
    PGGraph *_graph;
    PGGraphPublicEventNodeCollection *_publicEventNodes;
    PGGraphMomentNodeCollection *_momentNodesMatchingPublicEvents;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canProvideContextualKeyAssetsWithOptions:(id)arg0 ;
-(id)highlightNodesMatchingYearHighlight:(id)arg0 withOptions:(id)arg1 ;
-(id)initWithGraph:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 ;
-(void)enumerateContextualKeyAssetsForYearHighlight:(id)arg0 withOptions:(id)arg1 modelReader:(id)arg2 curationContext:(id)arg3 usingBlock:(id)arg4 ;


@end


#endif