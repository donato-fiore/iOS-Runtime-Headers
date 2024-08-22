// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NMSYNCDEFAULTSASSOCIATEDOBJECT_H
#define _NMSYNCDEFAULTSASSOCIATEDOBJECT_H

@class MPMediaPlaylist;

#import <Foundation/Foundation.h>


@interface _NMSyncDefaultsAssociatedObject : NSObject

@property (retain, nonatomic) MPMediaPlaylist *assetSyncPlaylist; // ivar: _assetSyncPlaylist


-(id)init;
-(void)_mediaLibraryDidChangeNotification:(id)arg0 ;
-(void)dealloc;


@end


#endif