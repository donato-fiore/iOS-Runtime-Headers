// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15MEDIAFOUNDATION29ERRORCONTROLLERIMPLEMENTATION_H
#define _TTC15MEDIAFOUNDATION29ERRORCONTROLLERIMPLEMENTATION_H

@class SwiftObject;
@protocol MFResettable, MFErrorController;



@interface _TtC15MediaFoundation29ErrorControllerImplementation : SwiftObject <MFResettable, MFErrorController>

 {
    ? externalImplementation;
    ? playerController;
    ? reporter;
}




-(void)reportCriticalError:(id)arg0 forItem:(id)arg1 ;
-(void)reset;
-(void)resolveError:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif