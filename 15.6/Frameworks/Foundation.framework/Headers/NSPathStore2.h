// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPATHSTORE2_H
#define NSPATHSTORE2_H



#import "NSString.h"

@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters;
}




+(id)pathStoreWithCharacters:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
+(id)pathWithComponents:(id)arg0 ;
-(*unsigned short)_fastCharacterContents;
-(BOOL)isAbsolutePath;
-(BOOL)isEqualToString:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)length;
-(id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)arg0 ;
-(id)_stringByStandardizingPathUsingCache:(BOOL)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)lastPathComponent;
-(id)pathComponents;
-(id)pathExtension;
-(id)stringByAbbreviatingWithTildeInPath;
-(id)stringByAppendingPathComponent:(id)arg0 ;
-(id)stringByAppendingPathExtension:(id)arg0 ;
-(id)stringByDeletingLastPathComponent;
-(id)stringByDeletingPathExtension;
-(id)stringByExpandingTildeInPath;
-(id)stringByResolvingSymlinksInPath;
-(id)stringByStandardizingPath;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif