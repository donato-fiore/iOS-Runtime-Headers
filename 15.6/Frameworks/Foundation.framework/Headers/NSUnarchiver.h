// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNARCHIVER_H
#define NSUNARCHIVER_H



#import "NSCoder.h"

@interface NSUnarchiver : NSCoder {
    *void datax;
    NSUInteger cursor;
    *_NSZone objectZone;
    NSUInteger systemVersion;
    char streamerVersion;
    char swap;
    char unused1;
    char unused2;
    *void pointerTable;
    *void stringTable;
    id *classVersions;
    NSInteger lastLabel;
    *void map;
    *void allUnarchivedObjects;
    id *reserved;
}


@property (readonly, getter=isAtEnd) BOOL atEnd;
@property (readonly) unsigned int systemVersion;


+(id)classNameDecodedForArchiveClassName:(id)arg0 ;
+(id)unarchiveObjectWithData:(id)arg0 ;
+(id)unarchiveObjectWithFile:(id)arg0 ;
+(void)decodeClassName:(id)arg0 asClassName:(id)arg1 ;
+(void)initialize;
-(*void)decodeBytesWithReturnedLength:(*NSUInteger)arg0 ;
-(NSInteger)versionForClassName:(id)arg0 ;
-(id)classNameDecodedForArchiveClassName:(id)arg0 ;
-(id)data;
-(id)decodeDataObject;
-(id)decodeObject;
-(id)initForReadingWithData:(id)arg0 ;
-(struct _NSZone *)objectZone;
-(void)_setAllowedClasses:(id)arg0 ;
-(void)dealloc;
-(void)decodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)decodeClassName:(id)arg0 asClassName:(id)arg1 ;
-(void)decodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)decodeValuesOfObjCTypes:(char *)arg0 ;
-(void)replaceObject:(id)arg0 withObject:(id)arg1 ;
-(void)setObjectZone:(struct _NSZone *)arg0 ;


@end


#endif