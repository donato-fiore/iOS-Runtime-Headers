// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDATA_H
#define CNDATA_H


#import <Foundation/Foundation.h>

#import "CNFileManager.h"
#import "CNURLSessionFactory.h"

@interface CNData : NSObject

@property (readonly, nonatomic) CNFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) CNURLSessionFactory *sessionFactory; // ivar: _sessionFactory


+(NSUInteger)NSDataWritingOptionsFromCNDataWritingOptions:(NSUInteger)arg0 ;
+(id)dataWithContentsOfFileURL:(id)arg0 ;
+(id)dataWithContentsOfURL:(id)arg0 ;
+(id)dataWithContentsOfURL:(id)arg0 sessionFactory:(id)arg1 ;
+(id)observableWithContentsOfURL:(id)arg0 ;
+(id)observableWithContentsOfURL:(id)arg0 sessionFactory:(id)arg1 ;
+(id)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 ;
+(id)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 fileManager:(id)arg3 ;
-(id)dataWithContentsOfURL:(id)arg0 ;
-(id)init;
-(id)initWithFileManager:(id)arg0 ;
-(id)initWithFileManager:(id)arg0 urlSessionFactory:(id)arg1 ;
-(id)observableWithContentsOfURL:(id)arg0 ;
-(id)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif