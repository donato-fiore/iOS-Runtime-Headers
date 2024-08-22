// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAFOLDER_H
#define DAFOLDER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAFolder : NSObject

@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (copy, nonatomic) NSString *folderID; // ivar: _folderID
@property (copy, nonatomic) NSString *folderName; // ivar: _folderName
@property (nonatomic) BOOL hasRemoteChanges; // ivar: _hasRemoteChanges
@property (nonatomic) BOOL isDefault; // ivar: _isDefault
@property (copy, nonatomic) NSString *parentFolderID; // ivar: _parentFolderID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)mailboxID;
-(id)parentMailboxID;


@end


#endif