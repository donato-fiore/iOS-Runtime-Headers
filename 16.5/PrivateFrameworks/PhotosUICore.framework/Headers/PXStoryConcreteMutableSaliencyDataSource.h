// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETEMUTABLESALIENCYDATASOURCE_H
#define PXSTORYCONCRETEMUTABLESALIENCYDATASOURCE_H

@class NSMutableDictionary, NSString;
@protocol PXStorySaliencyDataSource, NSCopying;

#import <Foundation/Foundation.h>


@interface PXStoryConcreteMutableSaliencyDataSource : NSObject <PXStorySaliencyDataSource, NSCopying>

 {
    NSMutableDictionary *_saliencyAreasByUUID;
    NSMutableDictionary *_rawSaliencyAreasByUUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)rawSaliencyAreasForDisplayAsset:(id)arg0 ;
-(id)saliencyAreasForDisplayAsset:(id)arg0 ;
-(void)setSaliencyAreas:(id)arg0 rawSaliencyAreas:(id)arg1 forDisplayAsset:(id)arg2 ;


@end


#endif