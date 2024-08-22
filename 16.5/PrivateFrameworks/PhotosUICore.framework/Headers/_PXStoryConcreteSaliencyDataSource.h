// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PXSTORYCONCRETESALIENCYDATASOURCE_H
#define _PXSTORYCONCRETESALIENCYDATASOURCE_H

@class NSDictionary, NSString;
@protocol PXStorySaliencyDataSource;

#import <Foundation/Foundation.h>


@interface _PXStoryConcreteSaliencyDataSource : NSObject <PXStorySaliencyDataSource>

 {
    NSDictionary *_saliencyAreasByUUID;
    NSDictionary *_rawSaliencyAreasByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSaliencyAreasByUUID:(id)arg0 rawSaliencyAreasByUUID:(id)arg1 ;
-(id)rawSaliencyAreasForDisplayAsset:(id)arg0 ;
-(id)saliencyAreasForDisplayAsset:(id)arg0 ;


@end


#endif