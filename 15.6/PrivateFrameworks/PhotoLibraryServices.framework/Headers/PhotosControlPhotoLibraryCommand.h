// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHOTOSCONTROLPHOTOLIBRARYCOMMAND_H
#define PHOTOSCONTROLPHOTOLIBRARYCOMMAND_H

@class NSManagedObjectContext, PHPhotoLibrary, PLPhotosCTL, NSString, NSURL;
@protocol OS_dispatch_group;


#import "PhotosControlCommand.h"

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand {
    NSManagedObjectContext *_moc;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
    _NSRange _argumentRangeForRunOnManagedObjects;
}


@property (readonly) NSString *libraryArg; // ivar: _libraryArg
@property (readonly) NSURL *libraryURL; // ivar: _libraryURL


+(char *)libraryOptstring;
+(char *)optstring;
+(id)libraryUsage;
+(id)libraryUsagesummary;
+(id)usage;
+(id)usagesummary;
+(struct option *)libraryLongopts;
+(struct option *)longopts;
-(BOOL)argument:(id)arg0 isValidDouble:(*CGFloat)arg1 ;
-(BOOL)libraryProcessOption:(char)arg0 arg:(id)arg1 ;
-(BOOL)processOption:(int)arg0 arg:(id)arg1 ;
-(id)_jsonDictionaryFromManagedObject:(id)arg0 allPreviousObjects:(id)arg1 currentDepth:(NSUInteger)arg2 maxDepth:(NSUInteger)arg3 ;
-(id)initWithArgc:(int)arg0 argv:(*char *)arg1 options:(unsigned char)arg2 ctl:(id)arg3 ;
-(id)jsonDictionaryFromError:(id)arg0 ;
-(id)jsonDictionaryFromManagedObject:(id)arg0 maxDepth:(NSUInteger)arg1 ;
-(id)libraryURLFromArgument:(id)arg0 ;
-(id)managedObjectContext;
-(id)photoLibrary;
-(id)photosCtl;
-(id)plPhotoLibrary;
-(id)processBooleanOptionArg:(id)arg0 ;
-(int)runOnAssetArgumentsAllowAll:(BOOL)arg0 additionalPredicate:(id)arg1 block:(id)arg2 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg0 identifierPropertyKey:(id)arg1 allowAll:(BOOL)arg2 additionalPredicate:(id)arg3 sortDescriptors:(id)arg4 block:(id)arg5 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg0 identifierPropertyKey:(id)arg1 allowAll:(BOOL)arg2 additionalPredicate:(id)arg3 sortDescriptors:(id)arg4 relationshipKeyPathsForPrefetching:(id)arg5 block:(id)arg6 ;
-(int)runOnManagedObjectArgumentsWithEntityName:(id)arg0 identifierPropertyKey:(id)arg1 block:(id)arg2 ;
-(int)runOnPhotoKitAssetArgumentsAllowAll:(BOOL)arg0 propertySets:(id)arg1 additionalPredicate:(id)arg2 block:(id)arg3 ;
-(int)save;
-(void)configureWithAlternateURLToLibraryDatabase:(id)arg0 ;
-(void)enterGroup;
-(void)leaveGroup;
-(void)setArgumentRangeForRunOnManagedObjects:(struct _NSRange )arg0 ;
-(void)waitForGroup;


@end


#endif