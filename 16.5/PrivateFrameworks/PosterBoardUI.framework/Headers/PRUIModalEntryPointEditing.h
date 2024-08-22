// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRUIMODALENTRYPOINTEDITING_H
#define PRUIMODALENTRYPOINTEDITING_H

@class PRSPosterConfiguration, PRMutablePosterConfiguration, NSString, PRSServerPosterPath, PRSPosterUpdateSessionInfo;
@protocol PRUIModalEntryPoint;

#import <Foundation/Foundation.h>


@interface PRUIModalEntryPointEditing : NSObject <PRUIModalEntryPoint>

 {
    PRSPosterConfiguration *_serviceConfiguration;
}


@property (readonly, nonatomic) PRMutablePosterConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editingType; // ivar: _editingType
@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRSServerPosterPath *serverPosterPath;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PRSPosterUpdateSessionInfo *updateSessionInfo; // ivar: _updateSessionInfo


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithExtensionIdentifier:(id)arg0 configuration:(id)arg1 ;
-(id)initWithServiceConfiguration:(id)arg0 ;
-(id)initWithServiceConfiguration:(id)arg0 updateSessionInfo:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 extensionIdentifier:(id)arg1 configuration:(id)arg2 updateSessionInfo:(id)arg3 ;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif