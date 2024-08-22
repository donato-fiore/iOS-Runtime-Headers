// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCVOLUME_H
#define BRCVOLUME_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface BRCVolume : NSObject {
    statfs _stfs;
}


@property (readonly, nonatomic) int deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSNumber *freeSize;
@property (readonly, nonatomic) NSString *fsTypeName;
@property (readonly, nonatomic) BOOL hasCloning; // ivar: _hasCloning
@property (readonly, nonatomic) BOOL hasRenameExcl; // ivar: _hasRenameExcl
@property (readonly, nonatomic) BOOL hasRenameSwap; // ivar: _hasRenameSwap
@property (readonly, nonatomic) BOOL isCaseSensitive; // ivar: _isCaseSensitive
@property (readonly, nonatomic) BOOL isIgnoringOwnership; // ivar: _isIgnoringOwnership
@property (readonly, nonatomic) NSString *mountPath;
@property (readonly, nonatomic) NSNumber *totalSize;


-(BOOL)setUpForRelPath:(id)arg0 session:(id)arg1 error:(*id)arg2 ;
-(id)description;


@end


#endif