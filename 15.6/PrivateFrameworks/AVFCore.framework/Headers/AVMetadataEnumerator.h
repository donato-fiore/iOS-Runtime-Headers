// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMETADATAENUMERATOR_H
#define AVMETADATAENUMERATOR_H

@class NSEnumerator, NSString, NSLocale;



@interface AVMetadataEnumerator : NSEnumerator {
    *OpaqueFigMetadataReader _reader;
    NSEnumerator *_arrayEnumerator;
    id *_key;
    NSString *_keySpace;
    NSLocale *_locale;
    NSInteger _count;
    NSInteger _index;
}




+(id)metadataEnumeratorWithArray:(id)arg0 key:(id)arg1 keySpace:(id)arg2 locale:(id)arg3 ;
+(id)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0 ;
-(id)initWithArray:(id)arg0 key:(id)arg1 keySpace:(id)arg2 locale:(id)arg3 ;
-(id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0 ;
-(id)initWithMetadataReader:(struct OpaqueFigMetadataReader *)arg0 array:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)nextObject;
-(void)_setArrayEnumerator:(id)arg0 ;
-(void)_setKey:(id)arg0 ;
-(void)_setKeySpace:(id)arg0 ;
-(void)_setLocale:(id)arg0 ;
-(void)_setMetadataReader:(struct OpaqueFigMetadataReader *)arg0 ;
-(void)dealloc;


@end


#endif