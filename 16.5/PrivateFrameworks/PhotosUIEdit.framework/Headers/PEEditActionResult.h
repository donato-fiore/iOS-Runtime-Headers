// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PEEDITACTIONRESULT_H
#define PEEDITACTIONRESULT_H

@class NSError, NSString;
@protocol PEAsset;

#import <Foundation/Foundation.h>

#import "PEEditAction.h"

@interface PEEditActionResult : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSObject<PEAsset> *savedAsset; // ivar: _savedAsset
@property (retain, nonatomic) PEEditAction *sourceAction; // ivar: _sourceAction
@property (readonly, nonatomic) NSString *sourceAssetUUID; // ivar: _sourceAssetUUID
@property (readonly, nonatomic) PEEditAction *targetAction; // ivar: _targetAction


-(id)initWithAssetUUID:(id)arg0 targetAction:(id)arg1 ;


@end


#endif