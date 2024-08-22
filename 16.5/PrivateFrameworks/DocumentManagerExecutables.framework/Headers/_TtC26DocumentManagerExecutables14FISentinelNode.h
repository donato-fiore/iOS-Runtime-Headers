// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES14FISENTINELNODE_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES14FISENTINELNODE_H

@class FICustomNode, NSNumber, UTType, NSString, NSDate, NSURL, FPItem;



@interface _TtC26DocumentManagerExecutables14FISentinelNode : FICustomNode

@property (nonatomic, readonly) NSNumber *childItemCount;
@property (nonatomic, readonly) UTType *contentType;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDate *doc_lastUsedDate;
@property (nonatomic, readonly) NSNumber *fileSize;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) FPItem *fpItem;
@property (nonatomic, readonly) id *identifier;
@property (nonatomic, readonly) BOOL isFolder;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSString *providerDomainID;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, readonly) NSString *typeIdentifier;


-(id)init;


@end


#endif