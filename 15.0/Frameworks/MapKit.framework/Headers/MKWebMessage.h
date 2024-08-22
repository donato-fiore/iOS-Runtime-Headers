// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKWEBMESSAGE_H
#define MKWEBMESSAGE_H

@class NSDictionary, NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MKWebMessage : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSDictionary *JSONObject;
@property (copy, nonatomic) NSObject<NSCopying> *arguments; // ivar: _arguments
@property (copy, nonatomic) NSNumber *callNumber; // ivar: _callNumber
@property (copy, nonatomic) NSString *callee; // ivar: _callee
@property (copy, nonatomic) NSString *caller; // ivar: _caller
@property (copy, nonatomic) NSString *errorMessage; // ivar: _errorMessage
@property (copy, nonatomic) NSString *method; // ivar: _method
@property (copy, nonatomic) NSObject<NSCopying> *result; // ivar: _result
@property (copy, nonatomic) NSString *status; // ivar: _status
@property (copy, nonatomic) NSString *type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithJSONObject:(id)arg0 ;


@end


#endif