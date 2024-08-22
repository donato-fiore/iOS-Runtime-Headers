// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCLINICALATTACHMENTSCHEMAPROVIDER_H
#define HDCLINICALATTACHMENTSCHEMAPROVIDER_H

@class NSString;
@protocol HDAttachmentSchemaProvider;

#import <Foundation/Foundation.h>


@interface HDClinicalAttachmentSchemaProvider : NSObject <HDAttachmentSchemaProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)schemaIdentifier;
-(BOOL)readAuthorizationForObjectIdentifier:(id)arg0 client:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeAuthorizationForObjectIdentifier:(id)arg0 client:(id)arg1 profile:(id)arg2 error:(*id)arg3 ;
-(NSInteger)schemaVersionForObjectIdentifier:(id)arg0 profile:(id)arg1 error:(*id)arg2 ;


@end


#endif