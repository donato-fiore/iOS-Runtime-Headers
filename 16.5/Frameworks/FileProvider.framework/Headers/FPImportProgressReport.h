// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPIMPORTPROGRESSREPORT_H
#define FPIMPORTPROGRESSREPORT_H

@class NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPImportProgressReport : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *errorDetails; // ivar: _errorDetails
@property (readonly, copy, nonatomic) NSDictionary *json;
@property (readonly, nonatomic) NSInteger numberOfItemsInError; // ivar: _numberOfItemsInError
@property (readonly, nonatomic) NSInteger status; // ivar: _status


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStatus:(NSInteger)arg0 numberOfItemsInError:(NSInteger)arg1 errorDetails:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif