// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPORTRAITREQUESTHANDLER_H
#define SGPORTRAITREQUESTHANDLER_H

@class PPInternalRequestHandler;
@protocol SGPortraitRequestProtocol;

#import <Foundation/Foundation.h>


@interface SGPortraitRequestHandler : NSObject <SGPortraitRequestProtocol>

 {
    PPInternalRequestHandler *_intRequestHandler;
}




-(BOOL)_shouldUseNamedEntityToTopicAlgorithmWithSearchableItem:(id)arg0 ;
-(id)_extractionsFromPipelineEntity:(id)arg0 pipeline:(*id)arg1 ;
-(id)init;
-(void)extractionsFromSearchableItems:(id)arg0 completion:(id)arg1 ;
-(void)extractionsFromUserAction:(id)arg0 searchableItem:(id)arg1 completion:(id)arg2 ;


@end


#endif