// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DAFOLDERCHANGE_H
#define DAFOLDERCHANGE_H

@class NSString;
@protocol NSSecureCoding, DAFolderChangeConsumer;

#import <Foundation/Foundation.h>


@interface DAFolderChange : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger changeType; // ivar: _changeType
@property (weak, nonatomic) NSObject<DAFolderChangeConsumer> *consumer; // ivar: _consumer
@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) NSString *folderId; // ivar: _folderId
@property (retain, nonatomic) NSString *parentFolderId; // ivar: _parentFolderId
@property (nonatomic) BOOL renameOnCollision; // ivar: _renameOnCollision
@property (nonatomic) unsigned int taskId; // ivar: _taskId


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initFolderChangeWithChangeType:(NSUInteger)arg0 folderId:(id)arg1 parentFolderId:(id)arg2 displayName:(id)arg3 dataclass:(NSInteger)arg4 consumer:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif