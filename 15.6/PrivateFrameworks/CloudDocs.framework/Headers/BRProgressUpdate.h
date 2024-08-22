// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRPROGRESSUPDATE_H
#define BRPROGRESSUPDATE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "BRFileObjectID.h"

@interface BRProgressUpdate : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger downloadCompletedSize; // ivar: _downloadCompletedSize
@property (nonatomic) NSUInteger downloadTotalSize; // ivar: _downloadTotalSize
@property (copy, nonatomic) BRFileObjectID *folderID; // ivar: _folderID
@property (copy, nonatomic) NSArray *parentFileIDs; // ivar: _parentFileIDs
@property (nonatomic) NSUInteger uploadCompletedSize; // ivar: _uploadCompletedSize
@property (nonatomic) NSUInteger uploadTotalSize; // ivar: _uploadTotalSize


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif