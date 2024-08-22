// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION40QUEUEASSETLOADERCONTROLLERIMPLEMENTATION_H
#define _TTC15MEDIAFOUNDATION40QUEUEASSETLOADERCONTROLLERIMPLEMENTATION_H

@class SwiftObject, NSDictionary;
@protocol MFErrorController, MFStateDumpable;



@interface _TtC15MediaFoundation40QueueAssetLoaderControllerImplementation : SwiftObject <MFErrorController, MFStateDumpable>

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
-(void)reset;
-(void)resolveError:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif