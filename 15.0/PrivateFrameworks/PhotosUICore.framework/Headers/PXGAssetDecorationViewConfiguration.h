// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGASSETDECORATIONVIEWCONFIGURATION_H
#define PXGASSETDECORATIONVIEWCONFIGURATION_H

@class NSString;
@protocol NSCopying, PXGViewUserData;

#import <Foundation/Foundation.h>

#import "PXOperationStatus.h"

@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) PXOperationStatus *loadStatus; // ivar: _loadStatus
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif