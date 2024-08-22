// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALENTRYPOINTEDITHOMESCREEN_H
#define PRUIMODALENTRYPOINTEDITHOMESCREEN_H

@class NSString, PRSServerPosterPath;
@protocol PRUIModalEntryPoint;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointEditHomeScreen : NSObject <PRUIModalEntryPoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath; // ivar: _serverPosterPath
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithServiceConfiguration:(id)arg0 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif