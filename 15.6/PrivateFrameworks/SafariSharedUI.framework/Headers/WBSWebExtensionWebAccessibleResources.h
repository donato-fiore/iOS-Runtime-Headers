// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSWEBEXTENSIONWEBACCESSIBLERESOURCES_H
#define WBSWEBEXTENSIONWEBACCESSIBLERESOURCES_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WBSWebExtensionWebAccessibleResources : NSObject

@property (readonly, nonatomic) NSArray *matchPatternStrings; // ivar: _matchPatternStrings
@property (readonly, nonatomic) NSArray *resourceNames; // ivar: _resourceNames


-(id)_regexStringFromPath:(id)arg0 ;
-(id)initWithManifestV2Array:(id)arg0 errorString:(*id)arg1 ;
-(id)initWithManifestV3Dictionary:(id)arg0 errorStrings:(*id)arg1 matchPatternException:(*id)arg2 ;
-(void)_populateWebAccessibleResources:(id)arg0 errorStrings:(*id)arg1 ;


@end


#endif