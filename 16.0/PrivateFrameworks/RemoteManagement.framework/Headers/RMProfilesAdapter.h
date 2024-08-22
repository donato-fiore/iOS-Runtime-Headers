// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMPROFILESADAPTER_H
#define RMPROFILESADAPTER_H


#import <Foundation/Foundation.h>


@interface RMProfilesAdapter : NSObject

@property (nonatomic) BOOL isSystemScope; // ivar: _isSystemScope


-(id)initWithScope:(NSInteger)arg0 ;
-(id)installedProfileIdentifierByDeclarationKey;
-(id)profileNameForIdentifier:(id)arg0 ;
-(void)installProfileData:(id)arg0 store:(id)arg1 declarationKey:(id)arg2 completionHandler:(id)arg3 ;
-(void)uninstallProfileWithIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif