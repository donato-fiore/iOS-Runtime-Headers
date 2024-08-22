// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDATAARCHIVER_H
#define FMDATAARCHIVER_H

@class NSURL, NSData;

#import <Foundation/Foundation.h>


@interface FMDataArchiver : NSObject

@property (nonatomic) BOOL backedUp; // ivar: _backedUp
@property (nonatomic) BOOL createDirectories; // ivar: _createDirectories
@property (nonatomic) NSInteger dataProtectionClass; // ivar: _dataProtectionClass
@property (retain, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (copy, nonatomic) NSData *unitTestData; // ivar: _unitTestData


+(id)defaultClasses;
-(BOOL)saveArray:(id)arg0 error:(*id)arg1 ;
-(BOOL)saveDictionary:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)dataWritingOptionForDataProtectionClass:(NSInteger)arg0 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)readArrayAndClasses:(id)arg0 error:(*id)arg1 ;
-(id)readDataOfClasses:(id)arg0 error:(*id)arg1 ;
-(id)readDictionaryAndClasses:(id)arg0 error:(*id)arg1 ;
-(id)saveArray:(id)arg0 ;
-(id)saveDictionary:(id)arg0 ;
-(id)saveObject:(id)arg0 ;
-(id)underlyingDataWithError:(*id)arg0 ;
-(void)injectUnitTestData:(id)arg0 ;


@end


#endif