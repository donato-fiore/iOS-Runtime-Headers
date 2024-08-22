// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMASSETREFERENCE_H
#define CEMASSETREFERENCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CEMAssetReference : NSObject

@property (readonly) int assettype; // ivar: _assettype
@property (readonly, copy) NSString *identifier; // ivar: _identifier


+(id)referenceForIdentifier:(id)arg0 assetschematype:(id)arg1 ;
+(id)referenceForIdentifier:(id)arg0 assettype:(int)arg1 ;
-(id)initWithIdentifier:(id)arg0 assettype:(int)arg1 ;


@end


#endif