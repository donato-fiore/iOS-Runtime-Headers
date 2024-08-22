// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPROGRESSREPORTINGCAPABILITY_H
#define CLSPROGRESSREPORTINGCAPABILITY_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSProgressReportingCapability : CLSObject <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *details; // ivar: _details
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger kind; // ivar: _kind
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKind:(NSInteger)arg0 details:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif