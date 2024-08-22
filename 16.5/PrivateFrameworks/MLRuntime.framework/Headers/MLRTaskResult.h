// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MLRTASKRESULT_H
#define MLRTASKRESULT_H

@class NSDictionary, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MLRTaskResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult
@property (readonly, nonatomic) NSData *vector; // ivar: _vector


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONResult:(id)arg0 unprivatizedVector:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif