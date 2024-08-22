// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSCOREMLINTERFACE_H
#define SSCOREMLINTERFACE_H

@class MLModelAsset, MLModel;

#import <Foundation/Foundation.h>


@interface SSCoreMLInterface : NSObject {
    MLModelAsset *asset;
    MLModel *model;
}




-(float)predict:(id)arg0 error:(*id)arg1 ;
-(float)predictFromDictionaryFeatures:(id)arg0 error:(*id)arg1 ;
-(float)predictFromValues:(id)arg0 error:(*id)arg1 ;
-(id)getDescription;
-(id)getInputDescriptionsByName;
-(id)getVersionString;
-(id)initSpecificModel:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif