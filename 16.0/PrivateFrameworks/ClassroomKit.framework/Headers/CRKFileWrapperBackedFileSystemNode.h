// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFILEWRAPPERBACKEDFILESYSTEMNODE_H
#define CRKFILEWRAPPERBACKEDFILESYSTEMNODE_H

@class NSDictionary, NSData, NSString, NSFileWrapper;
@protocol CRKFileSystemNode;

#import <Foundation/Foundation.h>


@interface CRKFileWrapperBackedFileSystemNode : NSObject <CRKFileSystemNode>



@property (readonly, copy, nonatomic) NSDictionary *children;
@property (readonly, copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSFileWrapper *fileWrapper; // ivar: _fileWrapper
@property (readonly, nonatomic) NSFileWrapper *parentFileWrapper; // ivar: _parentFileWrapper
@property (readonly, nonatomic) NSInteger type;


-(BOOL)writeToURL:(id)arg0 error:(*id)arg1 ;
-(id)addChildWithDescriptor:(id)arg0 ;
-(id)initWithFileWrapper:(id)arg0 ;
-(id)initWithFileWrapper:(id)arg0 parentFileWrapper:(id)arg1 ;
-(void)removeFromParent;


@end


#endif