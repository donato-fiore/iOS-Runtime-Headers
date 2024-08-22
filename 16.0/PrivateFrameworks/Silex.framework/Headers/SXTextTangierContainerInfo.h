// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTTANGIERCONTAINERINFO_H
#define SXTEXTTANGIERCONTAINERINFO_H

@class TSDContainerInfo, NSString, NSSet;
@protocol SXTangierRepDirectLayerHostingInfo, TSDRepDirectLayerHosting;


#import "SXTextTangierStorage.h"

@interface SXTextTangierContainerInfo : TSDContainerInfo <SXTangierRepDirectLayerHostingInfo>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<TSDRepDirectLayerHosting> *directLayerHost; // ivar: _directLayerHost
@property (retain, nonatomic) NSSet *fixedExclusionPaths; // ivar: _fixedExclusionPaths
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSelectable; // ivar: _isSelectable
@property (retain, nonatomic) NSSet *rangedExclusionPaths;
@property (nonatomic) BOOL shouldHyphenate; // ivar: _shouldHyphenate
@property (readonly, nonatomic) SXTextTangierStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(Class)layoutClass;
-(Class)repClass;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 stylesheet:(id)arg2 string:(id)arg3 locale:(id)arg4 ;


@end


#endif