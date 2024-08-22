// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MPABSTRACTNETWORKARTWORKDATASOURCEVISUALIDENTICALITYIDENTIFIER_H
#define _MPABSTRACTNETWORKARTWORKDATASOURCEVISUALIDENTICALITYIDENTIFIER_H

@class NSString;
@protocol MPArtworkDataSourceVisualIdenticality;

#import <Foundation/Foundation.h>


@interface _MPAbstractNetworkArtworkDataSourceVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *imageArtworkIdentifier; // ivar: _imageArtworkIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *videoArtworkIdentifier; // ivar: _videoArtworkIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)stringRepresentation;


@end


#endif