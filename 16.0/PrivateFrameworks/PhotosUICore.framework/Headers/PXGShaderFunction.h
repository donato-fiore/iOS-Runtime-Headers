// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGSHADERFUNCTION_H
#define PXGSHADERFUNCTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGShaderFunction : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *assignmentVariable; // ivar: _assignmentVariable
@property (readonly, nonatomic) BOOL isOpaque; // ivar: _isOpaque
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)shaderFunctionByName;
+(id)shaderFunctions;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 assignmentVariable:(id)arg1 isOpaque:(BOOL)arg2 ;


@end


#endif