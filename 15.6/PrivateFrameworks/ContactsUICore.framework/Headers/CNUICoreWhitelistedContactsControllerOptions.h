// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNUICOREWHITELISTEDCONTACTSCONTROLLEROPTIONS_H
#define CNUICOREWHITELISTEDCONTACTSCONTROLLEROPTIONS_H


#import <Foundation/Foundation.h>


@interface CNUICoreWhitelistedContactsControllerOptions : NSObject

@property (readonly, nonatomic) BOOL shouldPrepopulateEmptyWhitelist; // ivar: _shouldPrepopulateEmptyWhitelist
@property (readonly, nonatomic) BOOL shouldRequireConfirmationOfChanges; // ivar: _shouldRequireConfirmationOfChanges


+(id)iosOptions;
+(id)macOptions;
+(id)macOptionsLocal;
-(id)init;
-(id)initWithShouldPrepopulateEmptyWhitelist:(BOOL)arg0 shouldRequireConfirmationOfChanges:(BOOL)arg1 ;


@end


#endif