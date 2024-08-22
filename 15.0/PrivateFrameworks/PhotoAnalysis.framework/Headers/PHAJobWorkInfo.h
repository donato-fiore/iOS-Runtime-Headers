// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHAJOBWORKINFO_H
#define PHAJOBWORKINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PHAJobWorkInfo : NSObject

@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier; // ivar: _assetLocalIdentifier
@property (nonatomic) int workerFlags; // ivar: _workerFlags


-(id)initWithAssetLocalIdentifier:(id)arg0 workerFlags:(int)arg1 ;


@end


#endif