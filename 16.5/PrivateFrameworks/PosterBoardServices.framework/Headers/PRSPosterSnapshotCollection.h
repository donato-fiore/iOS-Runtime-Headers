// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSPOSTERSNAPSHOTCOLLECTION_H
#define PRSPOSTERSNAPSHOTCOLLECTION_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSPosterSnapshot.h"

@interface PRSPosterSnapshotCollection : NSObject <BSXPCSecureCoding>



@property (readonly, nonatomic) NSInteger accessibilityContrast; // ivar: _accessibilityContrast
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PRSPosterSnapshot *floatingLayerSnapshot; // ivar: _floatingLayerSnapshot
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (readonly, nonatomic) PRSPosterSnapshot *primaryLayersSnapshot; // ivar: _primaryLayersSnapshot
@property (readonly, nonatomic) CGFloat snapshotScale; // ivar: _snapshotScale
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithPrimaryLayersSnapshot:(id)arg0 floatingLayerSnapshot:(id)arg1 snapshotScale:(CGFloat)arg2 interfaceStyle:(NSInteger)arg3 accessibilityContrast:(NSInteger)arg4 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif