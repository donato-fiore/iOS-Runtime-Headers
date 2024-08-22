// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSARCHIVER_H
#define NSARCHIVER_H

@class NSMutableData;


#import "NSCoder.h"

@interface NSArchiver : NSCoder {
    *void mdata;
    *void pointerTable;
    *void stringTable;
    *void ids;
    *void map;
    *void replacementTable;
    *void reserved;
}


@property (readonly, retain) NSMutableData *archiverData;


+(BOOL)archiveRootObject:(id)arg0 toFile:(id)arg1 ;
+(id)archivedDataWithRootObject:(id)arg0 ;
+(id)classNameEncodedForTrueClassName:(id)arg0 ;
+(void)encodeClassName:(id)arg0 intoClassName:(id)arg1 ;
+(void)initialize;
-(NSInteger)versionForClassName:(id)arg0 ;
-(id)classNameEncodedForTrueClassName:(id)arg0 ;
-(id)data;
-(id)initForWritingWithMutableData:(id)arg0 ;
-(void)dealloc;
-(void)encodeArrayOfObjCType:(char *)arg0 count:(NSUInteger)arg1 at:(*void)arg2 ;
-(void)encodeBytes:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeClassName:(id)arg0 intoClassName:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg0 ;
-(void)encodeDataObject:(id)arg0 ;
-(void)encodeObject:(id)arg0 ;
-(void)encodeRootObject:(id)arg0 ;
-(void)encodeValueOfObjCType:(char *)arg0 at:(*void)arg1 ;
-(void)encodeValuesOfObjCTypes:(char *)arg0 ;
-(void)replaceObject:(id)arg0 withObject:(id)arg1 ;


@end


#endif