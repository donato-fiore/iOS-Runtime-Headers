// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKAPPDATASTORAGE_H
#define IKAPPDATASTORAGE_H

@class NSString, NSMutableDictionary;
@protocol IKAppDataStoring, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IKAppDataStorage : NSObject <IKAppDataStoring>

 {
    NSUInteger _format;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, retain, nonatomic) NSString *filePath; // ivar: _filePath
@property (readonly) NSUInteger hash;
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableDictionary *storageDict; // ivar: _storageDict
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // ivar: _storageQueue
@property (readonly) Class superclass;


-(NSUInteger)count;
-(NSUInteger)setData:(id)arg0 forKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)getDataForKey:(id)arg0 ;
-(id)initWithFilePath:(id)arg0 identifier:(id)arg1 ;
-(id)keyAtIndex:(NSUInteger)arg0 ;
-(void)_saveDict:(id)arg0 ;
-(void)clear;
-(void)removeDataForKey:(id)arg0 ;


@end


#endif