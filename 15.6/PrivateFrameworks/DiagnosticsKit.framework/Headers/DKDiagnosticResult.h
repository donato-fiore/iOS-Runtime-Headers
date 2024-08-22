// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DKDIAGNOSTICRESULT_H
#define DKDIAGNOSTICRESULT_H

@class NSDictionary, NSArray, NSNumber;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DKDiagnosticResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *data; // ivar: _data
@property (readonly, nonatomic) NSArray *files; // ivar: _files
@property (readonly, nonatomic) NSNumber *statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSArray *uploadStatus; // ivar: _uploadStatus


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMutableResult:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif