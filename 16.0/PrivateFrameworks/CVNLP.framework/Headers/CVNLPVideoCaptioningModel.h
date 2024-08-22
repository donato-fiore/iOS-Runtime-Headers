// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CVNLPVIDEOCAPTIONINGMODEL_H
#define CVNLPVIDEOCAPTIONINGMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CVNLPVideoCaptioningModel : NSObject

@property (readonly, nonatomic) shared_ptr<cvnlp::vidcap::VideoCaptioningModel> model; // ivar: _model
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options


-(id)generateCaption:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif