// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPCLIPMODEL_H
#define CVNLPCLIPMODEL_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface CVNLPCLIPModel : NSObject

@property (readonly, nonatomic) shared_ptr<cvnlp::clip::CLIPModel> model; // ivar: _model
@property (readonly, nonatomic) NSString *modelName; // ivar: _modelName
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options


-(id)encodeImage:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
-(id)encodeText:(id)arg0 error:(*id)arg1 ;
-(id)encodeTextAverage:(id)arg0 error:(*id)arg1 ;
-(id)initWithOptions:(id)arg0 error:(*id)arg1 ;


@end


#endif