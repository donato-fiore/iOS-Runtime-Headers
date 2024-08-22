// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPMOVEINFO_H
#define FPMOVEINFO_H

@class NSArray;
@protocol NSSecureCoding;


#import "FPActionOperationInfo.h"
#import "FPActionOperationLocator.h"

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding>



@property (nonatomic) BOOL byCopy; // ivar: _byCopy
@property (readonly, nonatomic) BOOL byMoving;
@property (nonatomic) NSUInteger lastUsedDatePolicy; // ivar: _lastUsedDatePolicy
@property (retain, nonatomic) NSArray *rootFilenames; // ivar: _rootFilenames
@property (nonatomic) BOOL shouldBounce; // ivar: _shouldBounce
@property (retain, nonatomic) FPActionOperationLocator *targetFolder; // ivar: _targetFolder


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOperationID:(id)arg0 roots:(id)arg1 rootFilenames:(id)arg2 targetFolder:(id)arg3 lastUsedDatePolicy:(NSUInteger)arg4 bounce:(BOOL)arg5 byCopy:(BOOL)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif