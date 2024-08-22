// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKATTACHMENT_H
#define EKATTACHMENT_H

@class NSURL, NSString, NSNumber;


#import "EKObject.h"

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *URLForPendingFileCopy;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSString *fileFormat;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileNameRaw;
@property (retain, nonatomic) NSNumber *fileSize;
@property (nonatomic) BOOL isBinary;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;


+(BOOL)canonicalizedEqualityTestValue1:(id)arg0 value2:(id)arg1 key:(id)arg2 object1:(id)arg3 object2:(id)arg4 ;
+(Class)frozenClass;
+(id)_copyFileAtURLToTemporaryDirectory:(id)arg0 ;
+(id)createTempDestinationURLWithExtension:(id)arg0 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
-(BOOL)save:(*id)arg0 ;
-(BOOL)validateWithOwner:(id)arg0 error:(*id)arg1 ;
-(NSInteger)compareFileNames:(id)arg0 ;
-(id)XPropertiesData;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithFilepath:(id)arg0 ;
-(id)semanticIdentifier;
-(void)setSecurityScopedURLWrapperForPendingFileCopy:(id)arg0 ;
-(void)setXPropertiesData:(id)arg0 ;


@end


#endif