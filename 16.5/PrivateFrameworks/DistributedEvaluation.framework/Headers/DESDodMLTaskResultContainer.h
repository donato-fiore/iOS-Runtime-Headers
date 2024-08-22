// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DESDODMLTASKRESULTCONTAINER_H
#define DESDODMLTASKRESULTCONTAINER_H

@class NSDictionary, NSURL, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DESDodMLTaskResultContainer : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDictionary *JSONResult; // ivar: _JSONResult
@property (readonly, nonatomic) NSURL *binaryResultURL; // ivar: _binaryResultURL
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSString *sandboxExtension; // ivar: _sandboxExtension


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJSONResult:(id)arg0 binaryResultURL:(id)arg1 sandboxExtension:(id)arg2 duration:(CGFloat)arg3 ;
-(id)taskResultWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif