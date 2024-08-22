// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSVSAPSIGNATURECOMPONENT_H
#define SSVSAPSIGNATURECOMPONENT_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSVSAPSignatureComponent : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger componentType; // ivar: _componentType
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key


-(id)_dataToSignWithDataSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataToSignWithRequestProperties:(id)arg0 ;
-(id)dataToSignWithURLRequest:(id)arg0 ;
-(id)dataToSignWithURLResponse:(id)arg0 responseData:(id)arg1 ;
-(id)initWithComponentType:(NSInteger)arg0 key:(id)arg1 ;


@end


#endif