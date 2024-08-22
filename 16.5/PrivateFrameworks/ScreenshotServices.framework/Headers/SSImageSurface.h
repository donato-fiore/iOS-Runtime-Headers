// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSIMAGESURFACE_H
#define SSIMAGESURFACE_H

@class NSString;
@protocol BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface SSImageSurface : NSObject <BSXPCSecureCoding>



@property (nonatomic) *__IOSurface backingSurface; // ivar: _backingSurface
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif