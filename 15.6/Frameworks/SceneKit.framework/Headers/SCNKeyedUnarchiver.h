// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCNKEYEDUNARCHIVER_H
#define SCNKEYEDUNARCHIVER_H

@class NSKeyedUnarchiver, NSDictionary, NSArray, NSURL, NSString;


#import "SCNAssetCatalog.h"

@interface SCNKeyedUnarchiver : NSKeyedUnarchiver

@property (retain, nonatomic) SCNAssetCatalog *assetCatalog; // ivar: _assetCatalog
@property (retain, nonatomic) NSDictionary *context; // ivar: _context
@property (retain, nonatomic) NSArray *currentMorphTargets; // ivar: _currentMorphTargets
@property (readonly, nonatomic) NSURL *documentEnclosingURL;
@property (retain, nonatomic) NSURL *documentURL; // ivar: _documentURL
@property (retain, nonatomic) id *lookUpFoundInstance; // ivar: _lookUpFoundInstance
@property (retain, nonatomic) NSString *lookUpKey; // ivar: _lookUpKey


-(id)initForReadingWithData:(id)arg0 secure:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif