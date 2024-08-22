// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUJSCGIMAGEMETADATA_H
#define NUJSCGIMAGEMETADATA_H

@protocol NUJSCGImageMetadataExport;


#import "NUJSProxy.h"

@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>



@property (readonly) *CGImageMetadata metadata;


-(id)initWithCGImageMetadata:(struct CGImageMetadata *)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)nu_unwrapJSValue;


@end


#endif