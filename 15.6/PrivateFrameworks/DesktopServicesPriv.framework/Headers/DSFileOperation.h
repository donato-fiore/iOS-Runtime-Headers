// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSFILEOPERATION_H
#define DSFILEOPERATION_H

@class NSDate, NSProgress, UTType;
@protocol DSHashableEquatable, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DSFileOperationID.h"

@interface DSFileOperation : NSObject <DSHashableEquatable, NSSecureCoding>



@property (retain, nonatomic) NSDate *dateStarted; // ivar: _dateStarted
@property (retain, nonatomic) DSFileOperationID *operationID; // ivar: _operationID
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) UTType *utType; // ivar: _utType


+(BOOL)dateIsBusyFolderDate:(CGFloat)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif