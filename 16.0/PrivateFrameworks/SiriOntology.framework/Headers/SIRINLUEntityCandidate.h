// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRINLUENTITYCANDIDATE_H
#define SIRINLUENTITYCANDIDATE_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "USOSerializedGraph.h"
#import "SIRINLURRGroupIdentifier.h"

@interface SIRINLUEntityCandidate : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *annotations; // ivar: _annotations
@property (retain, nonatomic) NSString *appBundleId; // ivar: _appBundleId
@property (retain, nonatomic) USOSerializedGraph *entity; // ivar: _entity
@property (retain, nonatomic) NSString *entityId; // ivar: _entityId
@property (retain, nonatomic) SIRINLURRGroupIdentifier *groupId; // ivar: _groupId
@property CGFloat score; // ivar: _score


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEntity:(id)arg0 score:(CGFloat)arg1 ;
-(id)initWithEntity:(id)arg0 score:(CGFloat)arg1 entityId:(id)arg2 appBundleId:(id)arg3 groupId:(id)arg4 annotations:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif