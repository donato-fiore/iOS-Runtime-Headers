// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSSAVEEMAIL_H
#define MSSAVEEMAIL_H



#import "MSMailDefaultService.h"

@interface MSSaveEmail : MSMailDefaultService



+(void)deletePlaceholderAttachmentForURL:(id)arg0 completionBlock:(id)arg1 ;
+(void)placeholderAttachmentForFileName:(id)arg0 fileSize:(NSInteger)arg1 mimeType:(id)arg2 contentID:(id)arg3 completionBlock:(id)arg4 ;
+(void)saveEmail:(id)arg0 completionBlock:(id)arg1 ;
+(void)saveMessageData:(id)arg0 forAccountWithID:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id)arg3 ;
+(void)securityScopeForPlaceholderURL:(id)arg0 completionBlock:(id)arg1 ;
-(void)_saveEmail:(id)arg0 completionBlock:(id)arg1 ;
-(void)_saveMessageData:(id)arg0 forAccountWithID:(id)arg1 autosaveIdentifier:(id)arg2 completionBlock:(id)arg3 ;
-(void)_simulateServicesMethod:(id)arg0 arguments:(id)arg1 callback:(id)arg2 ;


@end


#endif