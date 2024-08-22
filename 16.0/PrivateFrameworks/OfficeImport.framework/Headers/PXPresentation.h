// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPRESENTATION_H
#define PXPRESENTATION_H


#import <Foundation/Foundation.h>


@interface PXPresentation : NSObject



+(?)readSizeFromChildOfElement:(?)arg0 childNamestate;
+(id)readFromPackage:(id)arg0 fileName:(id)arg1 reader:(id)arg2 cancel:(id)arg3 isThumbnail:(BOOL)arg4 delegate:(id)arg5 ;
+(void)readPresentationProperties:(id)arg0 to:(id)arg1 state:(id)arg2 ;
+(void)readSlideIndicesWithPresentationPart:(id)arg0 presentationState:(id)arg1 ;


@end


#endif