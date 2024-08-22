// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUJSVIDEOPROPERTIES_H
#define NUJSVIDEOPROPERTIES_H

@protocol NUJSVideoPropertiesExport, NUVideoProperties;


#import "NUJSProxy.h"

@interface NUJSVideoProperties : NUJSProxy <NUJSVideoPropertiesExport>



@property (readonly) CGRect cleanAperture;
@property (readonly) CGRect originalCleanAperture;
@property (readonly) CGSize originalSize;
@property (readonly) NSObject<NUVideoProperties> *videoProperties;


-(BOOL)containsMetadata:(id)arg0 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)initWithVideoProperties:(id)arg0 context:(id)arg1 ;


@end


#endif