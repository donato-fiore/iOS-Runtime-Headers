// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKFOLDER_H
#define IKFOLDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IKFolder : NSObject

@property (nonatomic) NSInteger folderID; // ivar: _folderID
@property (nonatomic) NSUInteger position; // ivar: _position
@property (nonatomic) BOOL syncToMobile; // ivar: _syncToMobile
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)archiveFolder;
+(id)folderWithFolderID:(NSInteger)arg0 ;
+(id)starredFolder;
+(id)unreadFolder;
-(id)description;
-(id)init;
-(id)initWithFolderID:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif