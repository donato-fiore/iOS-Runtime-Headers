// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKPERSISTENTATTACHMENT_H
#define EKPERSISTENTATTACHMENT_H



#import "EKPersistentObject.h"

@interface EKPersistentAttachment : EKPersistentObject



+(Class)meltedClass;
+(id)propertiesToUnloadOnCommit;
+(id)propertyKeyForUniqueIdentifier;
+(id)relations;
-(BOOL)shouldSetQuarantineAttributesOnCopiedFile;
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
-(id)securityScopedLocalURLForArchivedDataWrapper;
-(id)securityScopedLocalURLWrapper;
-(id)securityScopedURLWrapperForPendingFileCopy;
-(int)entityType;
-(int)flags;
-(void)setExternalID:(id)arg0 ;
-(void)setExternalModificationTag:(id)arg0 ;
-(void)setFileFormat:(id)arg0 ;
-(void)setFileNameRaw:(id)arg0 ;
-(void)setFileSize:(id)arg0 ;
-(void)setFlags:(int)arg0 ;
-(void)setLocalRelativePath:(id)arg0 ;
-(void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)arg0 ;
-(void)setSecurityScopedLocalURLWrapper:(id)arg0 ;
-(void)setSecurityScopedURLWrapperForPendingFileCopy:(id)arg0 ;
-(void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)arg0 ;
-(void)setURLString:(id)arg0 ;
-(void)setUUID:(id)arg0 ;
-(void)setXPropertiesData:(id)arg0 ;


@end


#endif