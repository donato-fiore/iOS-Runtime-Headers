// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSAVEPERMISSIONSTOSTORAGEINFORMATION_H
#define WBSSAVEPERMISSIONSTOSTORAGEINFORMATION_H


#import <Foundation/Foundation.h>

#import "WBSWebExtensionData.h"

@interface WBSSavePermissionsToStorageInformation : NSObject

@property (readonly, nonatomic) BOOL permissionsWereUpdatedDueToAnExternalChange; // ivar: _permissionsWereUpdatedDueToAnExternalChange
@property (readonly, nonatomic) WBSWebExtensionData *webExtension; // ivar: _webExtension


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithWebExtension:(id)arg0 permissionsWereUpdatedDueToAnExternalChange:(BOOL)arg1 ;


@end


#endif