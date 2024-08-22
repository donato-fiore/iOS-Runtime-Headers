// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPTESTINGCOLLISIONRESOLUTION_H
#define FPTESTINGCOLLISIONRESOLUTION_H

@class NSString;
@protocol NSFileProviderTestingCollisionResolution, NSFileProviderItem;


#import "FPTestingOperation.h"

@interface FPTestingCollisionResolution : FPTestingOperation <NSFileProviderTestingCollisionResolution>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSFileProviderItem> *renamedItem; // ivar: _renamedItem
@property (readonly, nonatomic) NSUInteger side;
@property (readonly, nonatomic) NSInteger snapshotVersion; // ivar: _snapshotVersion
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


+(BOOL)supportsSecureCoding;
-(id)asCollisionResolution;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationIdentifier:(id)arg0 renamedItem:(id)arg1 snapshotVersion:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif