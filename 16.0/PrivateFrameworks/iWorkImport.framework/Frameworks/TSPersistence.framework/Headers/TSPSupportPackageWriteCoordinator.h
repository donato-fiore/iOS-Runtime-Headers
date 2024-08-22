// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPSUPPORTPACKAGEWRITECOORDINATOR_H
#define TSPSUPPORTPACKAGEWRITECOORDINATOR_H



#import "TSPPackageWriteCoordinator.h"

@interface TSPSupportPackageWriteCoordinator : TSPPackageWriteCoordinator {
    TSPPackageWriteCoordinator *_packageWriteCoordinator;
}




-(BOOL)componentWriter:(id)arg0 externalPackageDidWriteObject:(id)arg1 claimingComponent:(*id)arg2 componentReadVersion:(*NSUInteger)arg3 ;
-(BOOL)isComponentExternalWithIdentifier:(NSInteger)arg0 wasCopied:(*BOOL)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)isObjectInExternalPackage:(id)arg0 claimingComponent:(*id)arg1 componentReadVersion:(*NSUInteger)arg2 ;
-(BOOL)isObjectWrittenInExternalPackageWithIdentifier:(NSInteger)arg0 ;
-(BOOL)shouldEnqueueComponent:(id)arg0 ;
-(BOOL)wasComponentCopied:(NSInteger)arg0 ;
-(NSInteger)componentIdentifierForObjectIdentifier:(NSInteger)arg0 objectOrNil:(id)arg1 objectUUIDOrNil:(id)arg2 outComponentIsVersioned:(*BOOL)arg3 ;
-(id)initWithContext:(id)arg0 archiverClass:(Class)arg1 archiverFlags:(char)arg2 documentRevision:(id)arg3 saveToken:(NSUInteger)arg4 fileFormatVersion:(NSUInteger)arg5 metadataObject:(id)arg6 packageWriteCoordinator:(id)arg7 ;
-(id)initWithContext:(id)arg0 archiverClass:(Class)arg1 archiverFlags:(char)arg2 documentRevision:(id)arg3 saveToken:(NSUInteger)arg4 packageIdentifier:(unsigned char)arg5 fileFormatVersion:(NSUInteger)arg6 preferredPackageType:(NSInteger)arg7 metadataObject:(id)arg8 ;
-(id)objectForIdentifier:(NSInteger)arg0 ;
-(void)didReferenceData:(id)arg0 ;


@end


#endif