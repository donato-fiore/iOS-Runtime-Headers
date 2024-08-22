// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSIMPLEKEYVALUESTORAGE_H
#define BMSIMPLEKEYVALUESTORAGE_H

@class BMFileManager, NSURL;
@protocol BMKeyValueStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BMSimpleKeyValueStorage : NSObject <BMKeyValueStorage>



@property (readonly, nonatomic) BMFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(id)_fetchValueForKey:(id)arg0 ;
-(id)fetchValueForKey:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)readDictionary;
-(void)_deleteValueForKey:(id)arg0 ;
-(void)_insertValue:(id)arg0 forKey:(id)arg1 ;
-(void)deleteValueForKey:(id)arg0 ;
-(void)insertValue:(id)arg0 forKey:(id)arg1 ;
-(void)storeDictionary:(id)arg0 ;


@end


#endif