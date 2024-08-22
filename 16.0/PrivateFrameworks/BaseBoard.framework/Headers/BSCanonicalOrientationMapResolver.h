// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BSCANONICALORIENTATIONMAPRESOLVER_H
#define BSCANONICALORIENTATIONMAPRESOLVER_H

@class NSString;
@protocol BSInterfaceOrientationMapResolving, BSXPCSecureCoding;

#import <Foundation/Foundation.h>


@interface BSCanonicalOrientationMapResolver : NSObject <BSInterfaceOrientationMapResolving, BSXPCSecureCoding>

 {
    NSInteger _targetOrientation;
    NSInteger _currentOrientation;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)interfaceOrientationForSupportedOrientations:(NSUInteger)arg0 preferredOrientation:(NSInteger)arg1 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithTargetOrientation:(NSInteger)arg0 currentOrientation:(NSInteger)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif