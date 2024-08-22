// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17MEDIAPLAYBACKCORE29ERRORCONTROLLERIMPLEMENTATION_H
#define _TTC17MEDIAPLAYBACKCORE29ERRORCONTROLLERIMPLEMENTATION_H

@class SwiftObject;
@protocol MFResettable, MFErrorController;



@interface _TtC17MediaPlaybackCore29ErrorControllerImplementation : SwiftObject <MFResettable, MFErrorController>

 {
    ? externalImplementation;
    ? playerController;
    ? reporter;
}




-(void)reportCriticalError:(id)arg0 forItem:(id)arg1 ;
-(void)resetWithReason:(id)arg0 ;
-(void)resolveError:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif