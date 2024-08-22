// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPHOTOLIBRARYASSET_H
#define MKPHOTOLIBRARYASSET_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MKPhotoLibraryAsset : NSObject

@property (copy, nonatomic) NSString *collection; // ivar: _collection
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSInteger rowID; // ivar: _rowID
@property (nonatomic) NSUInteger size; // ivar: _size


-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithPath:(id)arg0 filename:(id)arg1 collection:(id)arg2 size:(NSUInteger)arg3 ;


@end


#endif