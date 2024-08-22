// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKFACECOLLECTIONUPDATE_H
#define NTKFACECOLLECTIONUPDATE_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface NTKFaceCollectionUpdate : NSObject

@property (readonly, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)updateWithType:(NSInteger)arg0 uuid:(id)arg1 block:(id)arg2 ;


@end


#endif