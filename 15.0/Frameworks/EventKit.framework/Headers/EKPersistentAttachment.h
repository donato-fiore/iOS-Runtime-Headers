// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKPERSISTENTATTACHMENT_H
#define EKPERSISTENTATTACHMENT_H



#import "EKPersistentObject.h"

@interface EKPersistentAttachment : EKPersistentObject



+(Class)meltedClass;
+(id)relations;
-(BOOL)isBinary;
-(id)URLString;
-(id)UUID;
-(id)XPropertiesData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)externalID;
-(id)externalModificationTag;
-(id)fileFormat;
-(id)fileNameRaw;
-(id)fileSize;
-(id)localRelativePath;
-(id)securityScopedURLWrapperForPendingFileCopy;
-(id)semanticIdentifier;
-(int)entityType;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setFileFormat:(id)arg0 ;
-(void)setFileNameRaw:(id)arg0 ;
-(void)setFileSize:(id)arg0 ;
-(void)setIsBinary:(BOOL)arg0 ;
-(void)setLocalRelativePath:(id)arg0 ;
-(void)setSecurityScopedURLWrapperForPendingFileCopy:(id)arg0 ;
-(void)setURLString:(id)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setXPropertiesData:(id)arg0 ;


@end


#endif