// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10FOUNDATION13__NSSWIFTDATA_H
#define _TTC10FOUNDATION13__NSSWIFTDATA_H

@class NSData;



@interface _TtC10Foundation13__NSSwiftData : NSData {
    ? _backing;
    ? _range;
}


@property (nonatomic, readonly) *void bytes;
@property (nonatomic, readonly) NSInteger length;


-(BOOL)_isCompact;
-(BOOL)_providesConcreteBacking;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithBase64EncodedData:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithBase64EncodedString:(id)arg0 options:(NSUInteger)arg1 ;
-(id)initWithBytes:(*void)arg0 length:(NSInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSInteger)arg1 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSInteger)arg1 deallocator:(id)arg2 ;
-(id)initWithBytesNoCopy:(*void)arg0 length:(NSInteger)arg1 freeWhenDone:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 ;
-(id)initWithContentsOfFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfFile:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfMappedFile:(id)arg0 ;
-(id)initWithContentsOfMappedFile:(id)arg0 error:(*id)arg1 ;
-(id)initWithContentsOfURL:(id)arg0 ;
-(id)initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContentsOfURL:(id)arg0 options:(NSUInteger)arg1 maxLength:(NSInteger)arg2 error:(*id)arg3 ;
-(id)initWithData:(id)arg0 ;
-(id)mutableCopyWithZone:(*void)arg0 ;


@end


#endif