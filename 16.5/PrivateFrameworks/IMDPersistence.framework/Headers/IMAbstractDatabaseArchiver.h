// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMABSTRACTDATABASEARCHIVER_H
#define IMABSTRACTDATABASEARCHIVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IMAbstractDatabaseArchiver : NSObject

@property (readonly, nonatomic) NSString *destinationPath; // ivar: _destinationPath
@property (readonly, nonatomic) NSString *sourcePath; // ivar: _sourcePath


-(BOOL)copyDatabase:(id)arg0 ;
-(BOOL)deleteFailedArchiveAtPath:(id)arg0 error:(*id)arg1 ;
-(id)initWithSourceDatabasePath:(id)arg0 destinationDatabasePath:(id)arg1 ;
-(void)dealloc;


@end


#endif