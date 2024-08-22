// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QLEXTERNALLYCACHEDTHUMBNAILDATA_H
#define QLEXTERNALLYCACHEDTHUMBNAILDATA_H

@class NSString, NSData;
@protocol PQLResultSetInitializer;

#import <Foundation/Foundation.h>


@interface QLExternallyCachedThumbnailData : NSObject <PQLResultSetInitializer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *fileExtension; // ivar: _fileExtension
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *itemIdentifier; // ivar: _itemIdentifier
@property (readonly, nonatomic) NSUInteger size; // ivar: _size
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *versionIdentifier; // ivar: _versionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(id)initFromPQLResultSet:(id)arg0 error:(*id)arg1 ;


@end


#endif