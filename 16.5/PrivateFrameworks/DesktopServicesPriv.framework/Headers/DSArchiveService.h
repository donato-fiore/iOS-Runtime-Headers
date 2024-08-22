// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSARCHIVESERVICE_H
#define DSARCHIVESERVICE_H

@protocol DSArchiveServiceStreamingInternal, DSArchiveServiceProtocol, DSArchiveServiceUnarchivingDelegate;

#import <Foundation/Foundation.h>


@interface DSArchiveService : NSObject <DSArchiveServiceStreamingInternal, DSArchiveServiceProtocol>



@property (weak, nonatomic) NSObject<DSArchiveServiceUnarchivingDelegate> *unarchivingDelegate; // ivar: _unarchivingDelegate


-(id)archiveItemsAtURLs:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 compressionFormat:(NSUInteger)arg3 passphrase:(id)arg4 completionHandler:(id)arg5 ;
-(id)archiveItemsWithURLs:(id)arg0 compressionFormat:(NSUInteger)arg1 destinationFolderURL:(id)arg2 completionHandler:(id)arg3 ;
-(id)archiveItemsWithURLs:(id)arg0 passphrase:(id)arg1 addToKeychain:(BOOL)arg2 compressionFormat:(NSUInteger)arg3 destinationFolderURL:(id)arg4 completionHandler:(id)arg5 ;
-(id)unarchiveItemAtURL:(id)arg0 passphrase:(id)arg1 destinationFolderURL:(id)arg2 completionHandler:(id)arg3 ;
-(id)unarchiveItemAtURL:(id)arg0 passphrases:(id)arg1 addToKeychain:(BOOL)arg2 destinationFolderURL:(id)arg3 acceptedFormats:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(id)unarchiveItemAtURL:(id)arg0 passphrases:(id)arg1 destinationFolderURL:(id)arg2 acceptedFormats:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(id)unarchiveItemAtURL:(id)arg0 passphrases:(id)arg1 destinationFolderURL:(id)arg2 completionHandler:(id)arg3 ;
-(id)unarchiveItemAtURL:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 acceptedFormats:(NSUInteger)arg3 passphrases:(id)arg4 completionHandler:(id)arg5 ;
-(void)itemDescriptorsForItemAtURL:(id)arg0 passphrase:(id)arg1 completionHandler:(id)arg2 ;
-(void)itemDescriptorsForItemAtURL:(id)arg0 passphrases:(id)arg1 completionHandler:(id)arg2 ;
-(void)receiveArchivedItemsDescriptors:(id)arg0 ;


@end


#endif