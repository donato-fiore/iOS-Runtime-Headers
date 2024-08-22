// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLFILESYSTEMPERSISTENCEBATCHITEM_H
#define PLFILESYSTEMPERSISTENCEBATCHITEM_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface PLFileSystemPersistenceBatchItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL


-(id)description;
-(id)initWithFileURL:(id)arg0 ;
-(void)persist;
-(void)setData:(id)arg0 forKey:(id)arg1 ;
-(void)setInt32:(int)arg0 forKey:(id)arg1 ;
-(void)setString:(id)arg0 forKey:(id)arg1 ;
-(void)setUInt16:(unsigned short)arg0 forKey:(id)arg1 ;
-(void)setUInt64:(NSUInteger)arg0 forKey:(id)arg1 ;
-(void)setUUIDString:(id)arg0 forKey:(id)arg1 ;


@end


#endif