// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEATTRIBUTES_H
#define NSFILEATTRIBUTES_H

@class NSDictionary, NSMutableDictionary;



@interface NSFileAttributes : NSDictionary {
    NSMutableDictionary *dict;
    stat statInfo;
    ? catInfo;
    NSDictionary *extendedAttrs;
    int fileProtectionClass;
}




+(BOOL)_populateCatInfo:(struct ? *)arg0 forURL:(id)arg1 statInfo:(struct stat *)arg2 error:(*id)arg3 ;
+(id)_attributesAtPath:(id)arg0 partialReturn:(BOOL)arg1 filterResourceFork:(BOOL)arg2 error:(*id)arg3 ;
+(id)_attributesAtURL:(id)arg0 partialReturn:(BOOL)arg1 filterResourceFork:(BOOL)arg2 error:(*id)arg3 ;
+(id)attributesAtPath:(id)arg0 traverseLink:(BOOL)arg1 ;
+(id)attributesWithStat:(struct stat *)arg0 ;
-(BOOL)isDirectory;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)fileSystemNumber;
-(NSUInteger)count;
-(NSUInteger)fileGroupOwnerAccountNumber;
-(NSUInteger)fileOwnerAccountNumber;
-(NSUInteger)filePosixPermissions;
-(NSUInteger)fileSize;
-(NSUInteger)fileSystemFileNumber;
-(NSUInteger)hash;
-(id)fileGroupOwnerAccountName;
-(id)fileModificationDate;
-(id)fileOwnerAccountName;
-(id)fileType;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg0 ;
-(void)dealloc;


@end


#endif