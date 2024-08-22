// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE40QUEUEASSETLOADERCONTROLLERIMPLEMENTATION_H
#define _TTC17MEDIAPLAYBACKCORE40QUEUEASSETLOADERCONTROLLERIMPLEMENTATION_H

@class SwiftObject, NSDictionary;
@protocol MFErrorController, MFStateDumpable;



@interface _TtC17MediaPlaybackCore40QueueAssetLoaderControllerImplementation : SwiftObject <MFErrorController, MFStateDumpable>

 {
    ? delegate;
    ? silentFailureDirection;
    ? errorResolutionItem;
    ? token;
    ? wrapAround;
    ? queueController;
    ? itemLoader;
    ? itemBuffer;
    ? loadingCompletions;
    ? reporter;
    ? errorController;
}


@property (nonatomic, readonly) NSDictionary *stateDictionary;


-(void)reportCriticalError:(id)arg0 forItem:(id)arg1 ;
-(void)resetWithReason:(id)arg0 ;
-(void)resolveError:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif