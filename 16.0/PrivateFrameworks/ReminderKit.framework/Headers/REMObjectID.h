// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMOBJECTID_H
#define REMOBJECTID_H

@class NSString, NSURL, NSUUID;
@protocol REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMObjectID : NSObject <REMDAChangedIdentifierResult, REMCRMergeableDataType, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *entityName; // ivar: _entityName
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *stringRepresentation;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *urlRepresentation;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)objectIDWithURL:(id)arg0 ;
+(id)objectIDWithUUID:(id)arg0 entityName:(id)arg1 ;
+(void)initialize;
+(void)rem_registerClassAtCRCoderIfNeeded;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 entityName:(id)arg1 ;
-(id)redactedDescription;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif