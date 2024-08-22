// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUSICKIT_SOFTLINKING_MPMEDIALIBRARY_H
#define MUSICKIT_SOFTLINKING_MPMEDIALIBRARY_H

@class MPMediaLibrary, NSOperationQueue, NSString;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPMediaLibrary : NSObject {
    MPMediaLibrary *_underlyingMediaLibrary;
    NSOperationQueue *_operationQueue;
}


@property (readonly, nonatomic) float connectionProgress;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(id)availableMediaLibrariesDidChangeNotificationName;
+(id)deviceLibrary;
+(id)libraryConnectionProgressDidChangeNotificationName;
+(id)libraryDidChangeNotificationName;
+(id)libraryStatusDidChangeNotificationName;
+(id)sharedLibraries;
+(void)_handleAvailableLibrariesDidChangeNotification:(id)arg0 ;
+(void)beginDiscoveringMediaLibraries;
+(void)endDiscoveringMediaLibraries;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUnderlyingMediaLibrary:(id)arg0 ;
-(id)_underlyingMediaLibrary;
-(void)_handleLibraryConnectionProgressDidChangeNotification:(id)arg0 ;
-(void)_handleLibraryDidChangeNotification:(id)arg0 ;
-(void)_handleLibraryStatusDidChangeNotification:(id)arg0 ;
-(void)beginGeneratingLibraryChangeNotifications;
-(void)connectWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)endGeneratingLibraryChangeNotifications;
-(void)performOperation:(id)arg0 ;
-(void)sdk_addItemToLibraryWithStoreID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif