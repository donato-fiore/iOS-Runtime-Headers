// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSETPARKEDCARACTION_H
#define WFSETPARKEDCARACTION_H

@class WFAction;



@interface WFSetParkedCarAction : WFAction



-(BOOL)locationParameterIsCurrentLocation;
-(id)contentDestinationWithError:(*id)arg0 ;
-(id)missingLocationError;
-(id)resizedCompressedJPEGImageDataWithWFImage:(id)arg0 ;
-(void)fetchLastParkedCarContentItemWithCompletionHandler:(id)arg0 ;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif